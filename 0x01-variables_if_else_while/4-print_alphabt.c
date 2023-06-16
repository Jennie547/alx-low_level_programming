#include <stdio.h>
#include <stdlib.h>

/**
 * main - returns both alphabets but not e and q
 *
 * Returns: Always 0 (Success)
 */

int main(void)

{
	char ch = 'a';

	while (ch <= 'z');
	{
		if ((ch != 'e') && (ch != 'q'))
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
