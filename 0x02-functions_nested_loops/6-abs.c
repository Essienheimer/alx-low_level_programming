#include "main.h"
/**
*_abs - checks for absolute value
*
*@a: parameter to be checked
*
*Return: a if successful
*/

int _abs(int a)
{
	if (a < 0)
		a = a * (-1);
	else if (a >= 0)
		a = a;
	return (a);
}
