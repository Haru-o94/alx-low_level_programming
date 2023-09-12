#include "main.h"

/**
* _isalpha - check if the input is char
* @c: check of the input
*
* Return: 1 if c letter
*/

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (0);
}