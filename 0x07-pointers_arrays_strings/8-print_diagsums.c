#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - point of entering
 * @a: the array
 * @size: input
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = 0;
	int z;

	for (z = 0; z < size; z++)
	{
		x = x + a[z * size + z];
	}
	for (z = size - 1; z >= 0; z--)
	{
		y += a[z * size + (size - z - 1)];
	}
	printf("%d, %d", x, y);
	printf("\n");
}
