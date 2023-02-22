#include "main.h"
/**
*print_last_digit - function that prints the last digit
*
*@a: parameter that finds last digit
*
*Return: k
*/

int print_last_digit(int a)
{
	int k;

	k = a % 10;
	if (k < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
