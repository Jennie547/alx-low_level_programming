#include "main.h"

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * Return: void
 */

char *_strchr(char *s, char c)
{
	int iter = 0;

	for (; s[iter] >= '\0'; iter++)
	{
		if (s[iter] == c)
			return (&s[iter]);
	}
	return (0);
}
