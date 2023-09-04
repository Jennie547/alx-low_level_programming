#include "main.h"

/**
 * get_bit - returns bit value
 * @n: the usi
 * @index: the required index
 *
 * Return: index or -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int my_var = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	if ((n & my_var) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
