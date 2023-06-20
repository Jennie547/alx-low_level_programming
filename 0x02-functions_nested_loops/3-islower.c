#include "main.h"

/**
 * _islower - Prints 1 for lowercase and 0 for others
 * @c: The character in ASCII
 * Return: for lowercase characters, 1, for others, 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
