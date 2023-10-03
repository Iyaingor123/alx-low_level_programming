#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that create array of size size  and assign char c
 * @size: size of array
 * @c: char to be assign
 * Description: create array of size size and assign char c
 * Return: NULL if fail, pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int j;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (j = 0; j < size; j++)
		str[j] = c;
	return (str);
}
