#include <stdio.h>
/**
 * main - print the passed number
 * @argc: integer number
 * @argv: array value
 * Return: 0 - success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
