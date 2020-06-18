#include "holberton.h"
/**
 * print_line - Entry point
 *@n: int check
 *print '_'
 */
void print_line(int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
