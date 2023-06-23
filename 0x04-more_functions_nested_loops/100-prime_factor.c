#include <stdio.h>
#include "main.h"

/**
 * main - prints the highest prime factor of 612852475143
 * return: void
 */
int main(void)
{
	unsigned long int a, b = 612852475143;

	for (a = 3; a < 782849; a = a + 2)
	{
		while ((b % a == 0) && (b != 1))
			b = b / a;
	}

	printf("%lu\n", b);
	return (0);
}
