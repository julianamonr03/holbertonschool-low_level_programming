#include "holberton.h"
/**
 * print_alphabet_x10 - entry point
 * print m 10 times
 */
void print_alphabet_x10(void)
{
	int n, m;

	for (n = 0; n <= 9; n++)
	{
		for (m = 'a'; m <= 'z'; m++)
		{
			_putchar(m);
		}
		_putchar('\n');
	}
}
