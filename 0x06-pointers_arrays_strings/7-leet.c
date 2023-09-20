#include "main.h"

/**
 * leet - function encode into 1337speak
 * @n: value input
 * Return: n value
 */

char *leet(char *n)
{
int i;
int k;
char s1[] = "aAeEoOtTlL";
char s2[] = "4433007711";

for (i = 0; n[i] != '\0'; i++)
{
for (k = 0; k < 10; k++)
{
if (n[i] == s1[k])
{
n[i] = s2[k];
}
}
}
return (n);
}
