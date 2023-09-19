#include "main.h"

/**
 * print_rev - function print a string in reverse
 *
 * @s: reverse string input to be printed
 * Return: nothing
 */

void print_rev(char *s)
{
	int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
	for (a--; a >= 0; a--)
		putchar(s[a]);
	putchar('\n');
}
