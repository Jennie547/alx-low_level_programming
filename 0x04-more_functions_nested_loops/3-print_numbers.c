#include "main.h"

/**
 * print_numbers - return integers from 0 to 9
 * return: the numbers from 0 to 9
 */

void print_numbers(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		_putchar(n + 0);
	}
	_putchar('\n');
}
