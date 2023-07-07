#include "main.h"

/**
 * _memset - fill with particular values the memory block
 * @s: starting point
 * @b: desired value
 * @n: amount of bytes to be changed
 * Return: new arrays
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
		s[i] = b;
	n--;

	return (s);
}
