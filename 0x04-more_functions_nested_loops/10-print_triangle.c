#include "main.h"

/**
 * print_triangle - function printing a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
	int hash;
	int index;

	if (size > 0)
	{
		for (hash = 0; hash < size; hash++)
		{
			for (index = 0; index < size; index++)
			{
				if (index < size - (hash + 1))
			{

			}
				else
				{
				_putchar('#');
			}
			}
				_putchar('\n');
		}
	}
}
