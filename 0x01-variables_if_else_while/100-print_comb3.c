#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: prints every two possible combined digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int y = '0';
	int x = '0';

	for (x = '0'; x <= 9; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			if (!((y == x) || (x > y)))
			{
				putchar(x);
				putchar(y);
				if (!(y == '9' && x == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
