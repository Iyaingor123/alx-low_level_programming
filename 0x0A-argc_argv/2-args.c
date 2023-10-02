#include <stdio.h>

/**
 * main - prints all argument received
 * @argc: number of argument
 * @argv: array that contains argument
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}
