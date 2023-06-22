#include "main.h"

/**
 * print_line - returns a bunch of rows of straight lines
 * @n: number of times the straight lines should be printed
 * return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int x;

		for (x = 1; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
