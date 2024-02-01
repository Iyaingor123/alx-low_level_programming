#include <stdio.h>

/**
 * _strlen - functions that return the length of a string
 * @s: the length of the string
 * Return: the string length
 */

int _strlen(char *s)

{
int longt = 0;

while (*s != '\0')
{
longt++;
s++;
}
return (longt);
}
