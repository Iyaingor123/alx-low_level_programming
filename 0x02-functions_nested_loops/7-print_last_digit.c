#include "main.h"

/**
 * print_last_digit - function to print last digit number
 *@i: function of lines
 * Return: k
 */

int print_last_digit(int i)
{
	int k;

	k = i % 10;
	if (i < 0)
		k = -k;
	_putchar(k + '0');
	return (k);
}
