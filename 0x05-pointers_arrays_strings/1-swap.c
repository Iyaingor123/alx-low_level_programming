#include "main.h"

/**
 * swap_int - functions swaps the values of two integers
 * @a: integer to be swap
 * @b: integer to be swap
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int temp  = *a;

	*a = *b;
	*b = temp;
}
