#include "main.h"

/**
 *factorial - calc factorial of a given number and return
 *@n: input number
 *
 *Return: the factorial of a number
 */
int factorial(int n)
{
	if (n >= 0 && n <= 1)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
