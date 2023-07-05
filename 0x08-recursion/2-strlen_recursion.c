#include "main.h"

/**
 * _strlen_recursion - gives back how long a string is
 * @s: string in use
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	if (*s)
	{
		length++;
		length += _strlen_recursion(s + 1);
	}
	return (length);
}
