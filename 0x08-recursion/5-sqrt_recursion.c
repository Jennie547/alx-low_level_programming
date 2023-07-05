#include "main.h"

int actual_sqrt_recursion(int n, int m);

/**
 * _sqrt_recursion - returns square root
 * @n: given number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (actual_sqrt_recursion(n, 0));
}

/**
 * actual_sqrt_recursion - finds the naturalsquare root number using recursion
 * @n: given number
 * @m: the iterator
 * Return: the square root
 */

int actual_sqrt_recursion(int n, int m)
{
	if (m * m > n)
		return (-1);
	if (m * m == n)
		return (m);
	return (actual_sqrt_recursion(n, m + 1));
}
