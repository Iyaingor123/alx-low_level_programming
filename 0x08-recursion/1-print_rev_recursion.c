#include "main.h"

/**
 * _print_rev_recursion - print a reverse string
 * @s: printed string
 */

void _print_rev_recursion(char *s)
{
_print_rev_recursion(s + 1);
_putchar(*s);
}
