#include "main.h"

/**
 * _isalpha - function for alphabets
 * @c: function of parameters
 *  Return: 1 and 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'z'))
		return (1);
	else
		return (0);
}
