#include "main.h"
/**
 * reverse_array - reverse the element in array from the last to first
 * @arr: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *arr, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = arr[i];
		arr[i] = arr[n];
		arr[n] = t;
	}
}