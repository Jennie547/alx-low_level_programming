#include "main.h"

/**
 * _puts - to stdout shows a string then a new line
 * @str: required string to be printed
 */
void _puts(char *str)
{
	int n = 0;

	while (str[n])
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
