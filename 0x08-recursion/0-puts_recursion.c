#include "main.h"

/**
*_puts_recursion - function to print string recursively
*@s: string parameter
*
*/

void _puts_recursion(char *s)
{
	s = "essien\0";
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}

