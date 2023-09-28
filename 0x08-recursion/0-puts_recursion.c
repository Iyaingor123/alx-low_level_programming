#include "main.h"

/**
 * _puts_recursion - function of recursion that prints to screen
 * @s: pointer function to a string
 * Return: 0
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
		_putchar(*s)'
			_puts_recursion(s + 1);
	{
		if (*s == '\0')
	}
	_putchar('\n')
}
