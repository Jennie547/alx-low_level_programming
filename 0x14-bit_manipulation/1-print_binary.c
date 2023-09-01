#include "main.h"

/**
 * print_binary - returns the binary of a figure
 * @n: unsigned long int
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n >= 2)
	{
		print_binary(n / 2);
	}
	_putchar((n % 2) + '0');
}
