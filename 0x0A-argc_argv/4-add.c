#include <stdio.h>
#include <stdlib.h>
/**
*main - main function
*@argc: argument count
*@argv: argument vector
*
*Return: 0 for success, 1 for non-digit and 1 for Error
*/

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1 ; i < argc ; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				sum = sum + atoi(argv[i]);
		
		}
		printf("%d\n", sum);
	}
	return (0);
}
