#include "main.h"

/**
 * _strchr - point of entry
 * @s: input value
 * @c: second input value
 * Return: void
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
