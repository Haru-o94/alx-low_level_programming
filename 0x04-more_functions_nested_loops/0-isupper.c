#include "main.h"
/**
*_isupper - function that verifies if a  character is uppercase or not
*@n: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isupper(int n)
{
if ((n >= 'A') && (n <= 'Z'))
return (1);

return (0);
}
