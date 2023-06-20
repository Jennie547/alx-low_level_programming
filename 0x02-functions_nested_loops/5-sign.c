#include "main.h"

/**
 * print_sign - prints number signs
 * @n: The number to be printed
 * Return: 1, positive num, -1, negative num, 0 for others
 */

int print_sign(int n)

{

	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
