#include "holberton.h"
/**
 * _strdup - Function returns a pointer to a newly location in memory
 * and contains a copy of the string given
 * @str: String given
 * Return: Null if str = NULL or returns a pointer to a new string
 * duplicate of the string str
 */
char *_strdup(char *str)
{
	int a = 0, b;
	char *str2 = NULL;

	if (str == NULL)
	{
		return (NULL);
	}

	for (; str[a] != '\0'; a++)
		;

	str2 = malloc(a * sizeof(char) + 1);

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (b = 0; b < a; b++)
	{
		str2[b] = str[b];
	}

	str2[b] = '\0';
	return (str2);
}
