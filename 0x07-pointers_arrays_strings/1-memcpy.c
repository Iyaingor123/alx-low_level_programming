#include "main.h"

/**
 * _memcpy - function that copies a memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: number of bytes
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int j = 0;
	int k = n;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		n--;
	}
	return (dest);
}
