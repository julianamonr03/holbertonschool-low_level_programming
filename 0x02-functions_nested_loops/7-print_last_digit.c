#include "holberton.h"
/**
 * print_last_digit - Entry point
 * @ld: Absolute number of last digit
 * Return: return value of the last digit
 */
int print_last_digit(int ld)
{
	int n;

	if (ld < 0)
	{
	ld = ld * -1;
	}
	n = ld % 10;
	_putchar(n + '0');
	return (n);
}
