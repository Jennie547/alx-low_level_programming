#include "main.h"

/**
 * flip_bits - counts bits
 * @n: par one
 * @m: par two
 *
 * Return: bits no.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int my_res_val = n ^ m;
	unsigned int return_result = 0;

	while (my_res_val != 0)
	{
		my_res_val = my_res_val & (my_res_val - 1);
		return_result++;
	}

	return (return_result);
}
