#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>
#include <string.h>
#include <errno.h>

int i;
void print_error_and_exit(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

void display_elf_header_info(const Elf64_Ehdr *elf_header)
{
	printf("Magic:   ");

	for (i = 0; i < EI_NIDENT; ++i)
	{
	printf("%02x ", elf_header->e_ident[i]);
	}
	printf("\n");

	printf("Class:                             %s\n", elf_header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
	printf("Data:                              %s\n", elf_header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
	printf("Version:                           %d (current)\n", elf_header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            %s\n", elf_header->e_ident[EI_OSABI] == ELFOSABI_SYSV ? "UNIX - System V" : "Other");
	printf("ABI Version:                       %d\n", elf_header->e_ident[EI_ABIVERSION]);
	printf("Type:                              %s\n", elf_header->e_type == ET_EXEC ? "EXEC (Executable file)" : "Other");
	printf("Entry point address:               0x%lx\n", (unsigned long) elf_header->e_entry);
}

int main(int argc, char *argv[])
{
	const char *filename = argv[1];
	Elf64_Ehdr elf_header;
	int fd = open(filename, O_RDONLY);

	if (argc != 2)
	{
		print_error_and_exit("Usage: elf_header elf_filename");
	}

	if (fd == -1)
	{
		print_error_and_exit(strerror(errno));
	}

	if (read(fd, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		print_error_and_exit("Error reading ELF header");
	}

    /**Check if it's a valid ELF file*/
	if (memcmp(elf_header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error_and_exit("Not an ELF file");
	}
	display_elf_header_info(&elf_header);
	close(fd);
	return (0);
}
