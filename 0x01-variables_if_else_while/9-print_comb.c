#include <stdio.h>

/**
 * main - Entry point
 * Description: return combo of numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x = 48;

	while (x <= 57)
	{
		putchar(x);
		x++;
		if (x == 57)
		{
			continue;
		}
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
