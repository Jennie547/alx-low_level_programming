#include "main.h"

/**
 * set_string - a function that sets the value of a pointer to a char
 * @s: pointer pointing to another pointer
 * @to: pointed pointer character
 */

void set_string(char **s, char *to)
{
	*s = to;
}
