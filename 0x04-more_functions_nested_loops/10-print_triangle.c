#include "main.h"

/**
 * print_triangle - function printing a triangle with the charater #
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int hash;
	int index;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; index > 0; index--)
			{
				_putchar(' ');
			}
			for (index = 0; index < hash; index++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
}
