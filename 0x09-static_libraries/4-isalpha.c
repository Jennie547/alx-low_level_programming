#include "main.h"

/**
 * _isalpha - checks for alphabetic characters
 * @c: the given character
 * Return: 1, if so, 0, if not
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
