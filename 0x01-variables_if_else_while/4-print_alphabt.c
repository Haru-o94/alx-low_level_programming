#include <stdio.h>
/**
* main - Entry point
*
* Descripiton : print all alpha
*
* Return: Alawys 0 (success)
*/
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch =='q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}
