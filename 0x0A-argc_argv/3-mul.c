#include <stdio.h>
#include "main.h"

/**
 * _atoi - converts strings to integer
 * @s: given string
 * Return: integer (converted string)
*/

int _atoi(char *s)
{

	int a = 0;
	int m = 0;
	int n = 0;
	int len = 0;
	int f = 0;
	int figure = 0;

	while (s[len] != '\0')

		len++;

	while (a < len && f == 0)
	{

		if (s[a] == '-')
			++m;

		if (s[a] >= '0' && s[a] <= '9')
		{

			figure = s[a] - '0';
			if (m % 2)
				figure = -figure;
			n = n * 10 + figure;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
		a++;
	}
	if (f == 0)
		return (0);
	return (n);
}

/**
 * main - works the product of 2 numbers
 * @argc: how many arguments passed
 * @argv: array of arguments
 * Return: 0 if successful, 1 if erroneous
*/

int main(int argc, char *argv[])
{
	int product, first_number, second_number;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	first_number = _atoi(argv[1]);
	second_number = _atoi(argv[2]);
	product = first_number * second_number;
	printf("%d\n", product);

	return (0);
}
