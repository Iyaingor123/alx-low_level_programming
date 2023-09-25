#include "main.h"

/**
 * _strstr - function entry point
 * @haystack: input value
 * @needle: input value
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char * | = haystack;
		char *p = needle;

		while (* | = = *p && *p != '\0')
		{
			|++;
				p++;
		}
		if (*p == '\0')
			return (haystack);
		return (0);
	}
}
