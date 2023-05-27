#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

void print_error(const char* message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

void print_elf_header_info(Elf64_Ehdr* header) {
    printf("Magic: ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    
    printf("Class: ");
    switch (header->e_ident[EI_CLASS]) {
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
    switch (header->e_ident[EI_DATA]) {
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

int main(int argc, char* argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }
    
    const char* filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open the file");
    }
    
    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
        print_error("Failed to read the ELF header");
    }
    
    if (header.e_ident[EI_MAG0] != ELFMAG0 ||
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        print_error("Not an ELF file");
    }
    
    print_elf_header_info(&header);
    
    close(fd);
    return 0;
}
