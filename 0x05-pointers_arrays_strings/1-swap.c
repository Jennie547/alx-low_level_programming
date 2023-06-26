#include "main.h"

/**
 * swap_int - the value of two integers being swapped
 *
 * @a: fisrt integer
 *
 * @b: second integer
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
