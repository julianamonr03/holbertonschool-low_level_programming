#include "holberton.h"
/**
 * _strlen - Entry point
 *@s: integer
 * Return: to lenght of the string
 */
int _strlen(char *s)
{
	int a;

	while (*(s + a))
	{
		a++;
	}
	return (a);
}
