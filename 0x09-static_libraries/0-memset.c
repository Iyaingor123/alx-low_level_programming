#include "main.h"

/**
 * _memset - function fill a block of memorry ith a specific value
 * @s: address of memory to be filled
 * @b: value desired
 * @n: number of bytes to be changed
 * Return: array is changed with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int j = 0;

	for (; n > 0; j++)
	{
		s[j] = b;
		n--;
	}
	return (s);
}
