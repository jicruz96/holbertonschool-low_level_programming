#include "holberton.h"

/**
 * main - displays information contained in the ELF header
 *
 * @arc: argument count (should always be 3)
 * @arv: array of arguments
 *
 * Return: number of letters printed | 0 if error
 */

int main(int arc __attribute__((unused)), char *arv[] __attribute__((unused)))
{
	dprintf(STDERR_FILENO, "Usage: %s elf_header elf_filename\n", argv[0]);
	exit(98);
	return (0);
}
