#include <stdio.h>

/**
 * main - returns up to 1024 the sum of multiples of 3 and 5
 * Return: always 0 (success)
 */

int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}
		x++;
	}
	printf("%d\n", y);
	return (0);
}
