#include "main.h"
#include <stdio.h>
#include <elf.h>
#include <stdio.h>

void check_elf(unsigned char *e_ident);
void write_magic(unsigned char *e_ident);
void write_data(unsigned char *e_ident);
void print_class(unsigned char *e_ident);
void print_version(unsigned char *e_ident);
void print_abi(unsigned char *e_ident);
void write_osabi(unsigned char *e_ident);
void print_type(unsigned int e_type, unsigned char *e_ident);
void write_entry(unsigned long int e_entry, unsigned char *e_ident);
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
		if (e_ident[index] != 127 &&
				e_ident[index] != 'E' &&
				e_ident[index] != 'L' &&
				e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}
/**
*write_magic - Prints the magic numbers of an ELF header
*@e_ident: A pointer to an array with the ELF magic numbers
*Return: Nothing
*/

void write_magic(unsigned char *e_ident)
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
