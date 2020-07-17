#include "variadic_functions.h"
#include <stdio.h>
/**
 * sum_them_all - Function that returns the sum of all its parameters
 * @n: Numbers
 * Return: sum of the elements
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	int sum = 0;

	va_start(arg, n);

	if (n == 0)
	{
		return (0);
	}

	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
