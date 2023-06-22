#include "main.h"

/**
 * _isupper - check alphabets in uppercases
 * @n: the figure under check
 * Return: 1 if uppercase, 0 for others
 */
int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	return (0);
}
