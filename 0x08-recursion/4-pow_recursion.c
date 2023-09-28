#include "main.h"

/**
 * _pow_recursion - function returns valu of a raised to a power of y
 * @x: input value to be raised
 * @y: value power
 * Return: result of the power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
			if (y == 0)
			{
				return (1);
			}
			return (x * _pow_recursion(x, y - 1));
}
