#include "holberton.h"
/**
 * times_table - entry point
 *
 */
void times_table(void)
{
	int tab, tab2;

	for (tab = 0; tab < 10; tab++)
	{
		tab2 = 0;
		_putchar('0');
		for (tab2 = 1; tab2 < 10; tab2++)
		{
			int mul = tab * tab2;

			if (mul <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mul + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mul / 10) + '0');
				_putchar((mul % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
