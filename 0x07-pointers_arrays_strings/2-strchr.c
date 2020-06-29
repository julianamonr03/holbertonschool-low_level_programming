#include "holberton.h"
/**
 * _strchr - Locates character in a string
 * @s: String
 * @c: character to find
 * Return: Return pointer to the first occurrence of character
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	if (s[i] == c)
	{
		return (&s[i]);
	}

	return (NULL);
}
