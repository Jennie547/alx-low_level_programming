#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: given string
 * Return: integer
 */

int _atoi(char *s)
{
	int sign = 1, iter = 0;
	unsigned int res = 0;

	while (!(s[iter] <= '9' && s[iter] >= '0') && s[iter] != '\0')
	{
		if (s[iter] == '-')
			sign *= -1;
		iter++;
	}
	while (s[iter] <= '9' && (s[iter] >= '0' && s[iter] != '\0'))
	{
		res = (res * 10) + (s[iter] - '0');
		iter++;
	}
	res *= sign;
	return (res);
}
