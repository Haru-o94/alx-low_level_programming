#include "main.h"

/**
* main - Entry point
*
* print_alphabet - print all letter from a to z
*
* Return: Always 0 (Success)
*/

void print_alphabet(void)
{
int ch;

for (ch = 'a'; ch <= 'z'; ch++)
_putchar(ch);
_putchar('\n');
}
