#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: input value
 * @src: input value
 * @n: input value
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int jar;

	jar = 0;

	while (jar < n && src[jar] != '\0')
	{
		dest[jar] = src[jar];
		jar++;
	}
	while (jar < n)
	{
		dest[jar] = '\0';
		jar++;
	}


	return (dest);
}
