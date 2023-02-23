#include "main.h"
/**
*positive_or_negative - prints either positive or negative outcome of function
*
*@i: parameter to test positive or negative
*Return: 0
*/

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
