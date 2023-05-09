#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <stdio.h>

void check_elf(unsigned char *e_ident);
void _magic(unsigned char *e_ident);
void _data(unsigned char *e_ident);
void _class(unsigned char *e_ident);
void _version(unsigned char *e_ident);
void _abi(unsigned char *e_ident);
void _osabi(unsigned char *e_ident);
void _type(unsigned int e_type, unsigned char *e_ident);
void _entry(unsigned long int e_entry, unsigned char *e_ident);
void close_elf(int elf);

/**
* check_elf - Checks ELF file.
* @e_ident: A pointer to an array with elf magic numbers
*Return: Nothing
*/

void check_elf(unsigned char *e_ident)
{
	int idx;

	for (idx = 0; idx < 4; idx++)
	{
		if (e_ident[idx] != 127 &&
				e_ident[idx] != 'E' &&
				e_ident[idx] != 'L' &&
				e_ident[idx] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
*_magic - Prints the magic numbers of an ELF header
*@e_ident: A pointer to an array with the ELF magic numbers
*Return: Nothing
*/

void _magic(unsigned char *e_ident)
{
	int idx;

	printf("Magic:      ");
	for (idx = 0; idx < EI_NIDENT; idx++)
	{
		printf("%02x", e_ident[idx]);
		if (idx == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}
/**
*_data - Prints data  of an ELF header
*@e_ident: A pointer to an array with the ELF data
*Return: Nothing
*/
void _data(unsigned char *e_ident)
{
	printf("Data:   ");
	switch (e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("None\n");
			break;
		case ELFDATA2LSB:
			printf("2's Complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's Complement, big endian\n");
			break;
		default:
			printf("<Unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

 /**
 *_class - Prints class of an ELF header
 *@e_ident: A pointer to an array with the ELF class
 *Return: Nothing
 */

void _class(unsigned char *e_ident)
{
	printf("Class:   ");

	switch (e_ident[EI_CLASS])
	{
		case ELFCLASSNONE:
			printf("None\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		default:
			printf("<Unknown: %x>\n", e_ident[EI_CLASS]);
	}
}
/**
*_version - Prints an ELF header version
*@e_ident: A pointer to an array with the ELF version
*Return: Nothing
*/

void _version(unsigned char *e_ident)
{
	printf(" Version:   %d", e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf("(Current)\n");
			break;
		default:
			printf("\n");
			break;
	}
}

/**
*_osabi - Prints OSABI
*@e_ident: A pointer to an array with OSABI
*Return: Nothing
*/
void _osabi(unsigned char *e_ident)
{
	printf("OS/ABI:   ");

	switch (e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
*_type - Prints efl type
*@e_ident: A pointer to efl type
*@e_type: The efl type
*Return: Nothing
*/

void _type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("Type:   ");
	switch (e_type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", e_type);
	}
}
/**
  *_entry - Prints the entry of efl header
  *@e_ident: A pointer to efl
  *@e_entry: The address
  *Return: Nothing
  */

void _entry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("Entry point:  ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}
	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
  *_abi - Prints the ABI
  *@e_ident: A pointer to efl
  *Return: Nothing
  */

void _abi(unsigned char *e_ident)
{
	printf("ABI Version:   %d\n", e_ident[EI_ABIVERSION]);
}

/**
  *close_elf - Closes an ELF
  *@elf: descriptor
  *Return: Nothing
  */
void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
  *main- Entry point
  *@argc: The number of arguments
  *@argv: Array pointers to arguments.
  *
  *Return: 0 on success
  */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int fd, rd;
	Elf64_Ehdr *header;

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(fd, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(fd);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	check_elf(header->e_ident);
	printf("ELF Header:\n");

	_magic(header->e_ident);
	_class(header->e_ident);
	_data(header->e_ident);
	_version(header->e_ident);
	_osabi(header->e_ident);
	_abi(header->e_ident);
	_type(header->e_type, header->e_ident);
	_entry(header->e_entry, header->e_ident);

	free(header);
	close_elf(fd);
	return (0);
}

