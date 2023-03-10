#include "main.h"

/**
*_sqrt_recursion - the square function
*@n: the parameter of the square root
*1
*Return: the square root of the number
*/

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
*_sqrt - recursive square root
*@n: number
*@i: iterator
*Return: a number
*/
int _sqrt(int n, int i)
{
	int square = i * i;

	if (square > n)
		return (-1);
	if (square == n)
		return (i);
	return (_sqrt(n, i + 1));
}
