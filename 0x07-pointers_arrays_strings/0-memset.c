#include "holberton.h"
/**
 * _memset - Fills memory with a constant byte
 * @s: area pointed to
 * @b: constant byte
 * @n: bytes of memory
 * Return: to the memory area (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}
