#include "holberton.h"
/**
 * _strstr - Locates a substring
 * @haystack: String
 * @needle: String to locate
 * Return: pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; needle[a] != '\0'; a++)
	{
		for (b = 0; haystack[b] != '\0'; b++)
		{
			return (needle + a);
		}
	}
	return (NULL);
}
