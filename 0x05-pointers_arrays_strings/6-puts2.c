#include "holberton.h"
/**
 * puts2 - Entry point
 *@str: character of string
 * Return: no return
 */
void puts2(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		if (a % 2 == 0)
		{
			_putchar(str[a]);
		}
		a++;
	}
	_putchar('\n');
}
