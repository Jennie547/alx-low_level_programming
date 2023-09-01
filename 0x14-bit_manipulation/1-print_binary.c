#include "main.h"

/**
 * print_binary - returns the binary of a figure
 * @n: unsigned long int
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int my_val = 1;
	unsigned long int val_max = n;

	if (val_max == 0)
	{
		_putchar('0');
		return;
	}
	while (val_max > 0)
	{
		val_max = val_max >> 1;
		my_val = my_val << 1;
	}
	my_val = my_val >> 1;

	while (my_val > 0)
	{
		if (my_val & n)
			_putchar('1');
		else
			_putchar('0');
		my_val = my_val >> 1;
	}
}
