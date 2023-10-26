#include "main.h"

/**
 * set_bit - make the value of bit 1 in given index.
 * @n: pointer unsigned int
 * @index: index bit.
 *
 * Return: 1 if it true, -1 false.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
}
