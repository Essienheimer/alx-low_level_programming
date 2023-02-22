#include "main.h"
/**
*print_sign - function that prints the sign of a number
*
*@n: parameter to print sign of number
*
*Return: 1 means result is positive, 0 is neutral and -1 is negative
*/

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
