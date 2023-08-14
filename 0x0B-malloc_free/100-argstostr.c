#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr - Entry point
 * @ac: digit(int) input
 * @av: (double) pointer array
 * Return: void
 */

char *argstostr(int ac, char **av)
{
	int i, n, m = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			l++;
	}
	l += ac;

	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		str[m] = av[i][n];
		m++;
	}
	if (str[m] == '\0')
	{
		str[m++] = '\n';
	}
	}
	return (str);
}
