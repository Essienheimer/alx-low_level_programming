#include <stdio.h>
#include <stdlib.h>

/**
*main - main function
*@argc: argument count
*@argv: argument vector
*
*Return: 0 is sucess otherwise 1 is error
*/

int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	mul = num1 * num2;
	printf("%d\n", mul);
	}
	return (0);
}
