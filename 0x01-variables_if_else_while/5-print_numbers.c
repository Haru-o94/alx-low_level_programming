#include <stdio.h>
/**
* main - Entry point
*
* Descripiton : display all number
*
* Return: Alawys 0 (success)
*/
int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
