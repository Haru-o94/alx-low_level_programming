#include "main.h"

/**
* main - Entry point
*
* Description : print_alphabet - print the alpha from a to z
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
