#include <stdio.h>

/**
 * main - entry point
 * Return: always 0
 */

int main(void)
{
	int i;
	unsigned long a = 0, b = 1, sum;
	unsigned long w, x, y, z;
	unsigned long s, t;

	for (i = 0; i < 92; i++)
	{
		sum = a + b;
		printf("%lu, ", sum);
		a = b;
		b = sum;
	}
	w = a / 10000000000;
	y = b / 10000000000;
	x = a % 10000000000;
	z = b % 10000000000;
	for (i = 93; i < 99; i++)
	{
		s = w + y;
		t = x + z;
		if (x + z > 9999999999)
		{
			s += 1;
			t %= 10000000000;
		}
		printf("%lu%lu", s, t);
		if (i != 98)
			printf(", ");
		w = y;
		x = z;
		y = s;
		z = t;
	}
	printf("\n");
	return (0);
}
