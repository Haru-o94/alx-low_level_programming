#include "main.h"

/**
* array_range - make array integer
* @min: min value
* @max: max value
*
* Return: pointer to memory block
*/

int *array_range(int min, int max)
{
	int *block;
	int i, j = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (i = min; i <= max; i++)
		{
			block[j] = i;
			j++;
		}
		return (block);
	}
	else
		return (NULL);

}
