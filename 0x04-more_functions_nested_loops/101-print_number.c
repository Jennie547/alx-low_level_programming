#include "main.h"

/**
 * print_number - returns a number
 * @n: number to be shown
 */
void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		_putchar(45);
		n1 = -n1;
	}
	{
	if (n1 / 10)
	{
		print_number(n1 / 10);
	}
	_putchar(n1 % 10 + '0');
}
}
