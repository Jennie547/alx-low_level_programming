#include <stdio.h>

/**
 * main - Entry point
 * Description: return base sixteen numbers
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 48;
	int b = 97;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	while (b <= 102)
	{
		putchar(b);
		b++;
	}
	putchar('\n');
	return (0);
}
