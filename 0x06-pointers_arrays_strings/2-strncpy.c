#include "holberton.h"
/**
 * _strncpy - Copies a string
 *@dest: pointer
 *@src: string
 *@n: n bytes from src
 * Return: return to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i])
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
