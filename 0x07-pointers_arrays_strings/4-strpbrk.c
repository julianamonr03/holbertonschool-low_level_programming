#include "holberton.h"
/**
 * _strpbrk - Searches a string of any of a set of bytes
 * @s: String
 * @accept: String to compare bytes
 * Return: a pointer to the byte s or NULL if no matches
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				return (s + a);
			}
		}
	}
	return (NULL);
}
