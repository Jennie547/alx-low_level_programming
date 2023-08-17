#include "variadic_functions.h"

/**
 * print_strings - required function to output strings
 * @separator: the string
 * @n: how many
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list state;
	char *stmnt;
	unsigned int power;

	va_start(state, n);

	for (power = 0; power < n; power++)
	{
		stmnt = va_arg(state, char *);

		if (stmnt == NULL)
			printf("(nil)");
		else
			printf("%s", stmnt);

		if (power != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(state);
}

