#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of size and assign char c
 * @size: array size
 * @c: char given
 * Return: pointer to array, NULL if fail
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int iter;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (iter = 0; iter < size; iter++)
		str[iter] = c;
	return (str);
}
