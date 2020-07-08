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
	char *str2;
	int a, b = 0;

	if (str == '\0')
	{
		return ('\0');
	}
	for (a = 0; str[a] != '\0'; a++)

		str2 = malloc(b * sizeof(char) + 1);

	if (str2 == '\0')
	{
		return ('\0');
	}
	for (b = 0; b < a; b++)
	{
		str2[b] = str[b];
	}
	str2[b] = '\0';

	return (str2);
}
