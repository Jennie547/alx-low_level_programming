#include "function_pointers.h"
#include <stdio.h>


/**
 * array_iterator - returns every elements of the array
 * @array: the array
 * @size: number of elements to print
 * @action: pointer in regular or hex
 * Return: always void (success)
 */


void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; ++i)
	{
		action(array[i]);
	}
}
