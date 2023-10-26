#include "main.h"

/**
 * get_endianness - check of endianes
 *
 * Return: 0 if big endian, 1 if small endian
 */
int get_endianness(void)
{
	unsigned int x;
	char *c;

	x = 1;
	c = (char *) &x;

	return ((int)*c);
}
