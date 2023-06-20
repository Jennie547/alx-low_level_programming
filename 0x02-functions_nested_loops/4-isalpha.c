#include "main.h"

/**
 * _isalpha - prints only alphabets
 * @c: The haracter to be printed
 * Return: 1 for alphabets and 0 for other characters
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
