#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: list of types of arguments
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *string, *some = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", some, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", some, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", some, va_arg(list, double));
					break;
				case 's':
					string = va_arg(list, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", some, string);
					break;
				default:
					i++;
					continue;
			}
			some = ", ";
			i++;
		}
	}

	printf("\n");
	va_end(list);
}
