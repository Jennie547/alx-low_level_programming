#include "main.h"

/**
 * binary_to_uint - converts a string to an unsigned int
 * @b: the ptr
 *
 * Return: as indicated
 */

unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int un_int = 0;

	if (!b)
		return (0);

	for (count = 0; b[count]; count++)
	{
		if (b[count] < '0' || b[count] > '1')
			return (0);
		un_int = 2 * un_int + (b[count] - '0');
	}

	return (un_int);
}
