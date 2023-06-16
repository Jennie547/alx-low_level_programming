#include <stdio.h>
/**
 * main - Entry point
 * Description: print base ten numbers with putchar
 * Return: Alaways 0 (Success)
 */
int main(void)
{
	int n;

	for(n = 0; n < 10; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
