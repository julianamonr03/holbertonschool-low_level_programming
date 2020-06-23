#include "holberton.h"
/**
 * puts_half - Entry point
 *@str: half string
 * Return: no return
 */
void puts_half(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (a >= 5)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
