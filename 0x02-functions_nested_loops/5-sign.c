#include "main.h"

/**
* print_sign - print sign of number
* @c: check of the input
*
* Return: 1 if c + or 0 if zero or -1 less than 0
*/

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
