#include "main.h"
#include <stdio.h>

/**
 * rev_string - function reverses a string
 * @s: the string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	int i;
	char k;
	int t = 0;

	for (i = 0; s[i] != '\0'; i++)
		t++;
	for (i = 0; i < t / 2; i++)
	{
		k = s[i];
		s[i] = s[t - 1 - i];
		s[t - 1 - i] = k;
	}
}
