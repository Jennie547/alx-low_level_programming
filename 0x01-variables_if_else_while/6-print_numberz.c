#include <stdio.h>

/**
 * main - Entry point
 * Description: print base ten numbers with putchar
 * Return: Alaways 0 (Success)
 */

int main(void)
{
	int n = 0;

	while (n < 10)
	{
		putchar(n + 48);
		n++;
	}
	putchar('\n');
	return (0);
}
