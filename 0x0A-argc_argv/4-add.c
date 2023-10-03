#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - add positive numbers
 * @argc: number of argument
 * @argv: array that contains the argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int k, j, add = 0;

	for (k = k; k < argc; k++)
	{
		for (j = 0; argv[k][j] != '\0'; j++)
		{
			if (isdigit(argv[k][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[k]);
	}
	printf("%d\n", add);
	return (0);
}
