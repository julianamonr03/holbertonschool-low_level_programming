#include "holberton.h"
/**
 * print_diagonal - Entry point
 *@n: int check
 * print / lines
 */
void print_diagonal(int n)
{
	int m, c;

	if (n <= 0)
	{
		_putchar('\n');
	}
		for (m = 0; m < n; m++)
		{
			for (c = 0; c <= m; c++)
			{
				if (m == c)
				{
					_putchar('\\');
					_putchar('\n');
				}
				else
				{
					_putchar(' ');
				}
		}
	}
}
