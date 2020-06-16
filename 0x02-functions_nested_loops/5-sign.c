#include "holberton.h"
/**
 * print_sign - entry point
 * @n: int check
 * print sign
 * Return: 1 if postive or 0 is zero or -1 is negative
 */
int print_sign(int n)
{
		if (n > 0)
		{
			_putchar('+');
			return (1);
		}
		if (n == 0)
		{
			_putchar('0');
			return (0);
		}
		if (n < 0)
		{
			_putchar('-');
			return (-1);
		}
		return (0);
}
