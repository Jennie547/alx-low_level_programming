#include "main.h"

int check_func(char *s, int i, int len);

int _strlen_recursion(char *s);


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string given for reversing
 *
 * Return: 1 if it is, 0 it's not
 */

int is_palindrome(char *s)

{

	if (*s == 0)

		return (1);

	return (check_func(s, 0, _strlen_recursion(s)));

}


/**
 * _strlen_recursion - returns the length of the given string
 * @s: string given
 *
 * Return: length of given string
 */

int _strlen_recursion(char *s)

{

	if (*s == '\0')

		return (0);

	return (1 + _strlen_recursion(s + 1));

}


/**
 * check_func - checks the characters for palindrome using recursion
 * @s: string on check
 * @i: iterator
 * @len: length of given string
 *
 * Return: 1 if palindrome, 0 if counterwise
 */

int check_func(char *s, int i, int len)

{

	if (*(s + i) != *(s + len - 1))

		return (0);

	if (i >= len)

		return (1);

	return (check_func(s, i + 1, len - 1));

}
