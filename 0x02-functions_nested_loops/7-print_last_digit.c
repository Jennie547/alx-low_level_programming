#include "main.h"

/**
 * print_last_digit - returns the last number of a number
 * @n: the number with attention
 * Return: value of the number of the last digit
 */

int print_last_digit(int n)

{
	int l;

	l = n % 10;
	if (l < 0)
	{
		l = l * -1;
	}
	_putchar(l + '0');
	return (l);
}
