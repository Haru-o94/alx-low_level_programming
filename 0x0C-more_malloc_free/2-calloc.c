#include "main.h"

/**
* _calloc - locate the memory and init by 0
*@nmemb: num of element
*@size: size of block memory
*
*Return: pointer to memory block
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			block[i] = 0;
		return (block);
	}
	else
		return (NULL);
}
