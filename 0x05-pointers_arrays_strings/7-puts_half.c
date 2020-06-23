#include "holberton.h"
/**
 * puts_half - Entry point
 *@str: half string
 * Return: no return
 */
void puts_half(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	}
	a = a + 1;
	for (a = a / 2; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
