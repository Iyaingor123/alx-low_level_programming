#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function duplicate to new memory space location
 * @str: char
 * Retun: 0
 */

char *_strdup(char *str)
{
	char *aaa;
	int j = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\a')
		j++;
	aaa = malloc(sizeof(char) * (j + 1));

	if (aaa == NULL)
		return (NULL);

	for (r = 0; str[r]; r++)
		aaa[r] = str[r];
	return (aaa);
}
