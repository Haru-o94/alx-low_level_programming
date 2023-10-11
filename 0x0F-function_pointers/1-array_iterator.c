#include "function_pointers.h"

/**
 * array_iterator - run func as param.
 * @array: input int array.
 * @size: size of array.
 * @action: pointer type function.
 *
 * Return: no return.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
