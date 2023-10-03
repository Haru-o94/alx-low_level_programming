#include "main.h"
/**
 * _strpbrk - function for searching of any string in any set of byte
 * @s: input one
 * @accept: input two
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int k;

	while (*s)
	{
		for (k = 0; accept[k]; k++)
		{
		if (*s == accept[k])
		return (s);
		}
	s++;
	}

return ('\0');
}
