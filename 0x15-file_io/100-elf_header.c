#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <main.h>


/**
 * print_header - prints the content of the header file
 *
 * @header: the header file
 */

void print_header(Elf64_Ehdr *header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");
	printf("Class: ");
	switch (header->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Data: ");

	switch (header->e_ident[EI_DATA])
	{
		case ELFDATA2LSB:
			printf("2's complement, little-endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big-endian\n");
			break;
		default:
			printf("Unknown\n");
			break;
	}
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", header->e_entry);
}

/**
 * main - prints the content of elf header file at the start of an elf file
 * @argc: arguments count
 * @argv: arguments passed
 * Return: 0 success
 */

int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	int fd = open(filename, O_RDONLY);


	if (argc != 2)
		print_err("Usage: elf_header elf_filename");

	if (fd == -1)
		print_err("Failed to open the file");

	Elf64_Ehdr header;

	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
		print_err("Failed to read the ELF header");

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		print_err("Not an ELF file");
	}
	print_header(&header);
	close(fd);
	return (0);
}


/**
 * print_err - prints error message
 * @msg: the messaget ot be printed
 */

void print_err(const char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
