#include <stdio.h>

/**
 * bmain - fun run before main
 * Return: -1 return.
 */

void __attribute__ ((constructor)) bmain()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
