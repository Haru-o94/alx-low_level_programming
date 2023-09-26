#include "main.h"
/**
 *_memset - fill memory with constant value type
 *@s: starting address of memory to be filled
 *@b: the wanted value
 *@n: number of bytes to that changed in memory
 *
 *Return: will return a pointer memory (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	int h = 0;

	for (; n > 0; h++)
	{
		s[h] = b;
		n--;
	}
	return (s);
}
