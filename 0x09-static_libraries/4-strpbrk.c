#include "main.h"

/**
 * _strpbrk - Entry point
 * @s: input value
 * @accept: input value
 * Return: void
 */

char *_strpbrk(char *s, char *accept)
{
	int chr;

	while (*s)
	{
		for (chr = 0; accept[chr]; chr++)
		{
		if (*s == accept[chr])
		return (s);
		}
	s++;
	}

return ('\0');
}
