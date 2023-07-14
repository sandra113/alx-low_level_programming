#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * _elf_header - displays the content of the elf header file
 * @path: the path to the ELF file
 */
void _elf_header(const char *path)
{
	Elf64_Ehdr elf_header;
	int file = open(path, O_RDONLY);

	if (file == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", path);
		exit(98);
	}

	if (read(file, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		fprintf(stderr, "Error reading ELF header\n");
		exit(98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
			elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
			elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
			elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file %s\n", path);
		exit(98);
	}

	printf("Magic: %02x %02x %02x %02x\n,", elf_header.e_ident[EI_MAG0],
			elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2],
			elf_header.e_ident[EI_MAG3]);
	printf("Class: %d-bit\n", elf_header.e_ident[EI_CLASS] == ELFCLASS32 ?
			32 : 64);
	printf("Data: %s\n", elf_header.e_ident[EI_DATA] == ELFDATA2LSB ?
			"2'S complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
	printf("OS/ABI: %s\n", elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV ?
			"UNIX System V ABI" : "Other");
	printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", elf_header.e_type);
	printf("Entry point address: 0x%lx\n", elf_header.e_entry);

	close(file);
}

/**
 * main - Displays the content of ELF header
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (1);
	}

	_elf_header(argv[1]);

	return (0);
}
