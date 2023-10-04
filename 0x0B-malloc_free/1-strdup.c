#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Duplicate a string to newly allocated memory.
 * @str: The string to duplicate.
 *
 * Return: A pointer to allocated memory or NULL if memory allocated fails.
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
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		copy[i] = str[i];

	return (copy);
}
