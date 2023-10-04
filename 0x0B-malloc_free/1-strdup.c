#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string to newly allocated memory
 * @str: the string to duplicate
 *
 * Retun: pointer to the newly allocated duplicated string
 * or Null if memory allocated fails or str is Null
 */

char *_strdup(char *str)
{
	int i;
	char *copy;
	int count = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	count++;

	copy = malloc(sizeof(char) * (count + 1));
	if (copy == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		copy[i] = str[i];
	return (copy);
}
