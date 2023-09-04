#include "main.h"
#include <string.h>

/**
 * *_calloc - allocates memory to an array initializing the elements to 0
 * @nmemb: how many elements to allocate
 * @size: elements' size
 *
 * Return: pointer to memory block,  NULL if failed
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int bytes_total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	bytes_total = nmemb * size;

	ptr = malloc(bytes_total);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, bytes_total);

	return (ptr);
}
