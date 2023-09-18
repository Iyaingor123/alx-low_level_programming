#include "main.h"

/**
 * swap_int - functions swaps the values of two integers
 * @a: integer to be swap
 * @b: integer to be swap
 */

void swap_int(int *a, int *b)
{
	int a;

	a = *a;
	*a = *b;
	*b = a;
}
