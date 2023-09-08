#include <stdio.h>
/**
* main - Entry point
*
* Descripiton : print while using putchar
*
* Return: Alawys 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*convert digit*/
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
