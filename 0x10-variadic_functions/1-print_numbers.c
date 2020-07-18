#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - print numbers followed by a new line
 * @n: number of integers passed to the function
 * @separator: string to be printed between numbers
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int count;

	va_start(list, n);
	for (count = 0; count < n; count++)
	{
		printf("%d", va_arg(list, int));
		if (separator && count != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(list);
}
