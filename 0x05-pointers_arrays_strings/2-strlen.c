#include <stdio.h>

/**
 * _strlen - functions that return the length of a string
 * @str:the length of the string
 * Return: the string length
 */

size_t_strlen(const char *str)

{
size_t length = 0

while (*str++)
length++;
return (length);
}
