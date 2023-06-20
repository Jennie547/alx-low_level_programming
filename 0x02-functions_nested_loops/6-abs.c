#include "main.h"

/**
 * _abs - prints integer whole value
 * @c: The figure required for computing
 * Return: Total value of figure or zero
 */

int _abs(int c)

{

	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
