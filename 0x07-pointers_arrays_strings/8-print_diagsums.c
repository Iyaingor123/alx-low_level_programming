#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function entry point
 * @a: input value
 * @size: input value
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1;
	int sum2;
	int z;

	for (z = 0; z < size; z++)
	{
		sum1 = sum1 + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		sum2 += a[z * size + (size - z - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
