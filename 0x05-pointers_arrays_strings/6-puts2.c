#include "main.h"

/**
 * puts2 - prints all string characters accordingly then a new line
 * @str: the given string
 * return: print
 */

void puts2(char *str)
{
	char *a = str;
	int x = 0;
	int y = 0;
	int n;

	while (*a != '\0')
	{
		a++;
		x++;
	}
	y = x - 1;
	for (n = 0 ; n <= y ; n++)
	{
		if (n % 2 == 0)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
