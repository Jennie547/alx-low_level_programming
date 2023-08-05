#include "main.h"

/**
 * _strncat - concatenate two strings
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int iter, jar;

	iter = 0;

	while (dest[iter] != '\0')
	{
		iter++;
	}
	jar = 0;
	while (jar < n && src[jar] != '\0')
	{
		dest[iter] = src[jar];
		iter++;
		jar++;
	}
	dest[iter] = '\0';
	return (dest);
}
