#include "main.h"
/**
 * _strchr - function located charcter in string
 * @s: input one
 * @c: input two
 * Return: Always 0 (Success)
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
