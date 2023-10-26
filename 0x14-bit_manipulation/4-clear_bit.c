#include "main.h"

/**
 * clear_bit - mkae the value of bit 0 in given index.
 * @n: pointer unsigned int.
 * @index: index bit.
 *
 * Return: 1 if it true, -1 if it false.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
