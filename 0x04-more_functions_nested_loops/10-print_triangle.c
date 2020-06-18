#include "holberton.h"
/**
 * print_triangle - Entry point
 *@size: int check
 * print triangle
 */
void print_triangle(int size)
{
	int r, c;

	if (size <= 0)
		_putchar('\n');

	for (r = 1; r <= size; r++)
	{
		for (c = 1; c <= size; c++)
		{
			if (c <= size - r)
				_putchar(' ');
			else
				_putchar('#');
		}
		_putchar('\n');
	}

}
