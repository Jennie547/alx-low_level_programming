#include "main.h"
#include <string.h>

/**
 * _realloc - Reallocates memory and copies the contents to the new block
 * @ptr: pointer
 * @old_size: size of the previously allocated memory block
 * @new_size: new size of the memory block to be reallocated
 *
 * Return: Pointer to reallocated memory block, or NULL if failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *ptr_one;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	p = malloc(new_size);
	if (!p)
		return (NULL);

	ptr_one = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = ptr_one[i];
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = ptr_one[i];
	}

	free(ptr);
	return (p);

}
