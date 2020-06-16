#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @ld: Absolute number of last digit
 * Return: return value of the last digit
 */
int print_last_digit(int ld)
{
	int n;

	n = ld % 10;
	if (ld >= 0)
	{
		_putchar(n + '0');
		return (n);
	}
	else
	{
		n = n * -1;
		_putchar(n + '0');
		return (n);
	}
}
