#include "main.h"

/**
*factorial - functional of the factorial
*@n: parameter of number
*
*Return: an integer
*/

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
