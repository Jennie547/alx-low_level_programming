#include <stdio.h>

/**
 * main - prints the first 52 fibonacci nums
 * Return: always 0 (success)
 */

int main(void)
{
	int a = 0;
	long x = 1, y = 2;

	while (a < 50)
	{
		if (a == 0)
			printf("%ld", x);
		else if (a == 1)
			printf(", %ld", y);
		else
		{
			y += x;
			x = y - x;
			printf(", %ld", y);
		}
		++a;
	}
	printf("\n");
	return (0);
}
