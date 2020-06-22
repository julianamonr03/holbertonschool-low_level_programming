#include "holberton.h"
/**
 * print_rev - Entry point
 *@s: string
 * Return: No return
 */
void print_rev(char *s)
{
	while (*s)
        {
                s++;
	}
	while (*(s - 1))
	{
		_putchar(*(s - 1));
		s--;
	}
        _putchar('\n');
}
