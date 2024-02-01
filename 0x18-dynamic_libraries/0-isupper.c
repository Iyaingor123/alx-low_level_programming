#include "main.h"
/**
 * _isupper -program checking for uppercase letter
 * @c: variabl text
 * Return: 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
