#include "main.h"

/**
 * _memset - fills memory block with particular values
 * @s: memory block starting address
 * @b: wanted value
 * @n: how many bytes unchanged
 *
 * Return: array with new n bytes value
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
