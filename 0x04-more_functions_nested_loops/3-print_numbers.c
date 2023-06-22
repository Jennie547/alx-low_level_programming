#include "main.h"

/**
 * print_numbers - return integers from 0 to 9
 * return: void
 */

void print_numbers(void)
{
	char y;

	for (y = '0'; y <= '9'; y++)
	{
		_putchar(y);
	}
	_putchar('\n');
}
