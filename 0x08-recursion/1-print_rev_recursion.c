#include "main.h"

/**
* _print_rev_recursion - function to print in reverse other
*@s: string function
*
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;
	s++;
	 _print_rev_recursion(s);
	s--;
	_putchar (*s);
}
