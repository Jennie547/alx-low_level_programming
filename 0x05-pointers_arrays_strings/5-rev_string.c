#include "main.h"

/**
 * rev_string - a function capable of reversing a string
 * @s: the string entered
 * return: the reverse of the string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int x = 0;
	int y;

	while (s[x] != '\0')
	{
		x++;
	}
	for (y = 0; y < x; y++)
	{
		x--;
		rev = s[y];
		s[y] = s[x];
		s[x] = rev;
	}
}
