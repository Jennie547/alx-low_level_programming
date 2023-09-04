#include "function_pointers.h"

/**
 * print_name - function that prints the name
 * @name: given string
 * @f: pointer
 *
 * Return: 0
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	f(name);
}
