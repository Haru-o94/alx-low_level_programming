#include <stdio.h>
/**
 * main - print all what recived
 * @argc: integer number
 * @argv: array value
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
