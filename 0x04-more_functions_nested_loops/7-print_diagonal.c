#include "main.h"

/**
 * print_diagonal - construct a diagonal across the page
 * @n: number of times the slant line will appear
 * return: void
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int c, d;

		for (c = 0; c < n; c++)
		{
			for (d = 0; d < n; d++)
			{
				if (d == c)
					_putchar('\\');
				else if (d < c)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
