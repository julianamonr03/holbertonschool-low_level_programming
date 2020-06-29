#include "holberton.h"
/**
 * _memcpy - Copies memory area
 * @dest: memory area to store
 * @src: memory area to copy
 * @n: n bytes from memory area to copy
 * Return: returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
