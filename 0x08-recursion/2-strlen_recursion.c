#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - function return string length
 * @s: the string to be measured
 * Return: length
 */

int _strlen_recursion(char *s)
{
		if (*s != '\0')
		{
			return (1 + _strlen_recursion(s + 1));
		}
return (0);
}
