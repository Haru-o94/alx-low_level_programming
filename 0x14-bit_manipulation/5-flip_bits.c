#include "main.h"

/**
 * flip_bits - return num of bit need filp.
 * @n: one.
 * @m: two.
 *
 * Return: bit num
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}

	return (nbits);
}
