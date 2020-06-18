#include "holberton.h"
/**
 * print_numbers - Entry point
 *
 * printing numbers
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
