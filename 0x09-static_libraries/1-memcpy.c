#include "main.h"
/**
 *_memcpy - copies memory area
 *@dest: final destination
 *@src: initial memory residence
 *@n: number of bytes
 *Return: copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int cp = 0;
	int iter = n;

	for (; cp < iter; cp++)
	{
		dest[cp] = src[cp];
		n--;
	}
	return (dest);
}
