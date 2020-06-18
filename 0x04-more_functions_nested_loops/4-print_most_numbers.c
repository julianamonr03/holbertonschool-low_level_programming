#include "holberton.h"
/**
 * print_most_numbers - Entry point
 *
 * print numbers except 2 and 4
 */
void print_most_numbers(void)
{
	int n, a, b;

	a = '2';
	b = '4';
	for (n = '0'; n <= '9'; n++)
		if (n != a && n != b)
		{
			_putchar(n);
		}
	_putchar('\n');
}
