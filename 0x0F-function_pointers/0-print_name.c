#include "function_pointers.h"

/**
 * print_name - print name.
 * @name: name input.
 * @f: pointer.
 *
 * Return: no return.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
