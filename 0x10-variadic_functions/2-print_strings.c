#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_strings - Functions that prints strings
 * @separator: string to be printed between the strings
 * @n: number of the strings passed to the function
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int a;
	char *point;

	va_start(arg, n);

	for (a = 0; a < n; a++)
	{
		point = va_arg(arg, char*);

		if (point)
		{
			printf("%s", point);
		}
		else
		{
			printf("(nil)");
		}

		if (separator && a != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(arg);
}
