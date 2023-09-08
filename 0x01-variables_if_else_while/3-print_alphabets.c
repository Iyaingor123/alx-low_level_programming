#include  <stdio.h>

/**
 * main - putchar funtion print
 * Return: always 0
 */

int main(void)
{
char i;

for (i = 'a'; i <= 'r'; i++)
putchar(i);

for (i = 'A'; i <= 'Z'; i++)
putchar(i);
putchar('\n');

return (0);

}

