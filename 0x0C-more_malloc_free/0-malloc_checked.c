#include "main.h"

/**
 * malloc_checked - locate the memory by malloc, exit(98) if it fails
 * @b: size of memory block
 *
 * Return: pointer to memory block
 */
void *malloc_checked(unsigned int b)
{
	void *block;

	block = malloc(b);
	if (block == NULL)
		exit(98);
	return (block);
}
