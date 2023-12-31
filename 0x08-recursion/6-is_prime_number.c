#include "main.h"

int _prime_helper(int n, int i);

/**
 * is_prime_number - determines an integer as prime or not
 * @n: given number
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int is_prime_number(int n)

{

	if (n <= 1)

		return (0);

	return (_prime_helper(n, n - 1));

}


/**
 * _prime_helper - calculates if a number is prime using recursion
 * @n: number given
 * @i: iterator
 *
 * Return: 1 if n is a prime number, 0 if not
 */

int _prime_helper(int n, int i)

{

	if (i == 1)

		return (1);

	if (n % i == 0 && i > 0)

		return (0);

	return (_prime_helper(n, i - 1));

}
