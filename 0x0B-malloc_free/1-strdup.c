#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - recreate to the new memory space location
 * @str: char given
 *
 * Return: void
 */

char *_strdup(char *str)
{
	char *arr;
	int iter, row = 0;

	if (str == NULL)
		return (NULL);
	iter = 0;
	while (str[iter] != '\0')
		iter++;

	arr = malloc(sizeof(char) * (iter + 1));

	if (arr == NULL)
		return (NULL);

	for (row = 0; str[row]; row++)
		arr[row] = str[row];

	return (arr);
}
