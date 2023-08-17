#include "function_pointers.h"

/**
 * array_iterator - function to execute a parameter function
 * @array: the given array
 * @size: number of contents
 * @action: pointer
 *
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (x = 0; x < size; x++)
	{
		action(*array);
	}
}
