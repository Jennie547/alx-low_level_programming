#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_array - create array of size and assign char c
 * @size: array size
 * @c: char given
 * Return: pointer to array, NULL if fail
 */
<<<<<<< HEAD
=======

>>>>>>> 7771c2765d824e373414f78765b2db4183c48fd6
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
