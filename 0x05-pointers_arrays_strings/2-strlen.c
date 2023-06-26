#include "main.h"

/**
 * _strlen - prints how long the string is
 * @s: the string
 * Return: length
 */

int _strlen(char *s)
{
	int x = 0;

	while (*s != '\0')
	{
		x++;
		s++;
	}
	return (x);
}
