#include <stdio.h>

/**
*main - main function
*@argc: argument count
*@argv: argument vector
*
*Return: success 0
*/

int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}