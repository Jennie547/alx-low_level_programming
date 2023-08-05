#include "main.h"

/**
 * _strcmp - draws comparism between multiple strings
 * @s1: input value
 * @s2: input value
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int iter;

	iter = 0;

	while (s1[iter] != '\0' && s2[iter] != '\0')
	{
		if (s1[iter] != s2[iter])
		{
			return (s1[iter] - s2[iter]);
		}
	iter++;
	}
	return (0);
}
