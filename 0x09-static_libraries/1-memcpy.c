#include "main.h"
/**
 *_memcpy - funciton for copy memory area
 *@dest: memory  stored
 *@src: memory want to copied
 *@n: num of bytes
 *
 *Return: copied memory with number of byted that changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int l = 0;
	int j = n;

	for (; l < j; l++)
	{
		dest[l] = src[l];
		n--;
	}
	return (dest);
}
