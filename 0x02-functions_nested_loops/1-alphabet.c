#include "main.h"
/**
*print_alphabets - print all alphabets in lower case
*
*Return: success is 0
*/


void print_alphabet(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
