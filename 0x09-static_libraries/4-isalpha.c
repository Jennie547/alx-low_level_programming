#include "main.h"

/**
 * _isalpha - checks for uppercase and lowercase characters
 * @c: given character
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
