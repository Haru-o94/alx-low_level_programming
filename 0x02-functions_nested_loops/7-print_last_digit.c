#include "main.h"

/**
* print_last_digit - check of the last digit
* @n: check of the input
*
* Return: Always 0 (Success)
*/

int print_last_digit(int n)
{
int lastdigit;

if (n < 0)
lastdigit = -1 * (n % 10);
else
lastdigit = n % 10;

_putchar(lastdigit + '0');
return (lastdigit);
}
