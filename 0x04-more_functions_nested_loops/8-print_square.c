#include "main.h"
/**
 * print_square - prints a square then a new line
 * @size: size of the square
 */
void print_square(int size)
{
	int y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (y = 0; y < size; y++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
