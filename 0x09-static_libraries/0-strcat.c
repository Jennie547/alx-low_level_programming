#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int iter, jar;

	iter = 0;

	while (dest[iter] != '\0')
	{
		iter++;
	}
	jar = 0;
	while (src[jar] != '\0')
	{
		dest[iter] = src[jar];
		iter++;
		jar++;
	}
	dest[iter] = '\0';
	return (dest);
}
