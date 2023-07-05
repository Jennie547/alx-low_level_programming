#include "main.h"

int actual_prime(int n, int x);

/**
 * is_prime_number - determines a prime number
 * @n: number under examination
 * Return: 1, when n is prime num or if not, 0
 */

int is_prime_number(int n)
{
	if ( n <= 1)
		return (0);
	return (actual_prime(n, n - 1));
}

/**
 * actual_prime - calculatas using recursion if an integer is prime
 * @n: given number
 * @x: iterator
 * Return: 1, if n is prime, 0, if not
 */

int actual_prime(int n, int x)
{
	if (x == 1)
		return (1);
	if (n % x == 0 && x > 0)
		return (0);
	return (actual_prime(n, x - 1));
}
