#include "main.h"
/**
 * print_square - function tha print a square
 * @size: size of a square
 * Description: function use _putchar to print
 */

void print_square(int size)
{
	int x;
	int y;

	y = 0;

		if (size < 1)
			_putchar('\n');
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			_putchar('#');
			x++;
		}
		_putchar('\n');
		y++;
	}
}


