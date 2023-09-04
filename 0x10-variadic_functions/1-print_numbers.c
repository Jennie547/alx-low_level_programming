#include "variadic_functions.h"

/**
 * print_numbers - required function to print numbers
 * followed by a new line
 * @separator: the string
 * @n: number of int
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list the_nums;
	unsigned int i;

	va_start(the_nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(the_nums, int));

		if (i != (n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	printf("\n");

	va_end(the_nums);
}
