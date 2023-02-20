#include <stdio.h>

/**
*main - main function
*
*Return: always 0
*/

int main(void)
{
	int i;
	char e;

	for (i = 0 ; i < 10 ; i++)
		putchar(i = '0');
	for (e = 'a' ; e < 'f' ; e++)
		putchar(e);
	putchar('\n');

	return (0);
}
