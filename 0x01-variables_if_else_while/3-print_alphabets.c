#include <stdio.h>
/**
* main - Entry point
*
* Descripiton : var and negative number
*
* Return: Alawys 0 (success)
*/
int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*display a-z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*display A-Z*/
	while(CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');

	return (0);
}
