#include <stdio.h>
/**
* main - Entry point
*
* Descripiton : lowercase in reverse
*
* Return: Alawys 0 (success)
*/
int main(void)
{
	char ch = 'z';

	while(ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
