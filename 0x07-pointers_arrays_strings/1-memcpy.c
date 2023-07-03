#include "main.h"

/**
 * _memcpy - to copy the memory area
 * @dest: storage place
 * @src: where memory is to be copied to
 * @n: number of bytes
 * Return: the changed byte
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}
