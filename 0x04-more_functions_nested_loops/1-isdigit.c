#include "main.h"
/**
*_isdigit - function that verifies if a  character is a digit or not
*@n: tested character
*Return: returns 1 if it is uppercase , 0 if not
*/

int _isdigit(int n)
{
if ((n >= 48) && (n <= 57))
return (1);

return (0);
}
