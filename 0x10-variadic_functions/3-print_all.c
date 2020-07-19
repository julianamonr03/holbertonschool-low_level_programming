#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_all - Function that prints anything
 * @format: list of types of arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	unsigned int i = 0;
	char *chr;
	char *str = "";

	va_start(arg, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (format[i] != '\0')
	{
		switch (format[i])
		{
		case 'c':
			printf("%s%c", str, va_arg(arg, int));
			break;
		case 'i':
			printf("%s%d", str, va_arg(arg, int));
			break;
		case 'f':
			printf("%s%f", str, va_arg(arg, double));
			break;
		case 's':
			chr = va_arg(arg, char*);
			if (chr == NULL)
				chr = "(nil)";
			printf("%s%s", str, chr);
			break;
		default:
				i++;
				continue;
		}
		str = ", ";
		i++;
	}
	printf("\n");
	va_end(arg);
}
