#include "main.h"

/**
 * _memset -  fills memory with a constant byte
 * @s: the starting address
 * @b: the required value
 * @n: the number of the bytes to change
 * Return: new array with a different value of n bytes
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
