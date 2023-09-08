#include <stdio.h>

/**
* main - Entry point
*
* Descripiton : alphabet in lowercase
*
* Return: Alawys 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while(ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
