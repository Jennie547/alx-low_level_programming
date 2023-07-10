#include "main.h"

/**
 * _print_rev_recursion - returns a string in reverse
 * @s: the given string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}