#include "holberton.h"
/**
 * _strncat - Entry point
 *@dest: pointer
 *@src: pointer
 *@n: n bytes from src
 * Return: Return to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;
	int m = 0;

	while (dest[i])
	{
		i++;
	}

	while (m < n && src[m])
	{
		dest[i + j] = src[m];
		j++;
		m++;
	}
	return (dest);
}
