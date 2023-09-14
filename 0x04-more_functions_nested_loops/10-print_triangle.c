#include "main.h"

/**
 * print_triangle - function printing a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int hash;
	int index;
	int z;

	if (size < 0)
		_putchar('\n');
	{
		for (hash = 0; hash < size; hash++)
		{
			for (index = 0; index < size; index++)
			{
				for (index = size - hash; index > 1; index--)
				{
					_putchar(32);
			}
				for (z = 0; z <= hash; z++)
				{
					_putchar(35);
				}
				_putchar('\n');
		}
	}
}
}
