#include <stdio.h>
#include "main.h"

/**
 * mai Entry point
 * return: void
 */
int main(void)
{
	long int x, y, z;

	x = 612852475143;
	y = -1;

	while (x % 2 == 0)
	{
		y = 2;
		x /= 2;
	}
	for (z = 3; z <= sgrt(x); z = z + 2)
	{
		while (x % z == 0)
		{
			y = z;
			x = x / z;
		}
	}
	if (x > 2)
		y = x;

	printf("%ld\n", y);
	return (0);
}
