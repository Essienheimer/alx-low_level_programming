#include "main.h"
/**
*_islower - check that all alphabets are lower case
*
*@c: parameter to check if alphabets are lower case
*
*Return: success is 1, otherwise 0
*/

int _islower(int c)
{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
