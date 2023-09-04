#include "function_pointers.h"

/**
 * int_index - the required function
 * @array: the array
 * @cmp: pointer
 * @size: array elements' size
 *
 * Return: nothing
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
		{
			return (a);
		}
	}
	return (-1);
}
