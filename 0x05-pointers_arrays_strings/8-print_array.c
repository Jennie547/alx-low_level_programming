#include "main.h"

/**
 * print_array - shows n elements of an array of integer then a new line
 * @a: name of array
 * @n: number of elements in array
 * return: a and n contents
 */

void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < (n - 1); x++)
	{
		printf("%d, ", a[x]);
	}
	if (x == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
