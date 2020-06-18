#include "holberton.h"
/**
 * print_square - Entry point
 *@size: int check
 * print square
 */
void print_square(int size)
{
	int m, n;

	if (size <= 0)
		_putchar('\n');

	for (m = 0; m < size; m++)
	{
		for (n = 0; n < size; n++)
			_putchar('#');
		_putchar('\n');
	}
}
