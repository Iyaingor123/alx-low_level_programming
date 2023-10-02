#include <stdio.h>

/**
 * main - prints the numbe of argument
 * @argc: number of argument
 * @argv: array that contains the argument
 * Return: 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
