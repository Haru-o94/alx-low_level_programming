#include "main.h"
/**
 *comparar - calc and returns the power of number
 *@n: original number
 *@y: number to compare multi
 *
 *Return: square root
 */
int comparar(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);

	}
	return (comparar(n, y + 1));
}
/**
*_sqrt_recursion - suqrt of number
*@n: input number
*Return: the natural square root
*/
int _sqrt_recursion(int n)
{
	return (comparar(n, 1));
}