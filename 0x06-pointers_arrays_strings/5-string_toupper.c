#include "main.h"
/**
 * string_toupper - make all char uppercase
 * @ch: pointer
 *
 * Return: n
 */
char *string_toupper(char *ch)
{
	int i;

	i = 0;
	while (ch[i] != '\0')
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
			ch[i] = ch[i] - 32;
		i++;
	}
	return (ch);
}