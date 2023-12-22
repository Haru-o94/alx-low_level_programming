#include "hash_tables.h"

/**
 * key_index - getting index
 * @key: key
 * @size: size of array
 * Return: key index
 * Description: use djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
