#include "main.h"

/**
 * print_binary - returns the binary of a figure
 * @n: unsigned long int
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	int i = 63, my_val = 0;
	unsigned long int un_int;

	while (i >= 0)
	{
		un_int = n >> i;

		if (un_int & 1)
		{
			_putchar('1');
			my_val++;
		}
		else if (my_val)
			_putchar('0');

		i--;
	}

	if (!my_val)
		_putchar('0');
}
