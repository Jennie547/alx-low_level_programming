#include "main.h"

/**
 * _isdigit - check for a digit character
 * @a: the figure under check
 * Return: 1 for digit characters , 0 for others
 */
int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
		return (1);
	}
	return (0);
}
