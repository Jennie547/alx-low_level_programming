#include "main.h"

/**
 * _strpbrk - point of entry
 * @accept: input
 * @s: input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int d;

	while (*s)
	{
		for (d = 0; accept[d]; d++)
		{
			if (*s == accept[d])
				return (s);
		}
		s++;
	}
	return ('\0');
}
