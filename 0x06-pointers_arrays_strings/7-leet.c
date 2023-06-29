#include "main.h"

/**
 * leet - encodes a string into 1337
 * @n: input value
 * Return: value of n
 */

char *leet(char *n)
{
	int x;
	int b;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (x = 0; n[x] != '\0'; x++)
	{
		for (b = 0; b < 10; b++)
		{
			if (n[x] == s1[b])
			{
				n[x] = s2[b];
			}
		}
	}
	return (n);
}
