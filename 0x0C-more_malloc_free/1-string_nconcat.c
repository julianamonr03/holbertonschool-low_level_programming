#include "holberton.h"
/**
 * string_nconcat - Concatenates two strings
 * @s1: String
 * @s2: String
 * @n: Unsigned int number max for string s2
 * Return: Pointer to newly space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int sizes1, sizes2, sum = 0;
	char *string = NULL;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (sizes1 = 0; s1[sizes1] != '\0'; sizes1++)
		;
	for (sizes2 = 0; s2[sizes2] != '\0'; sizes2++)
		;
	sum = sizes1 + sizes2 + 1;

	if (n >= sizes2)
	{
		string = malloc(sizeof(char) * sum);
	}
	else
	{
		string = malloc(sizeof(char) * (sizes1 + n) + 1);
	}

	if (string == '\0')
	{
		return ('\0');
	}

	for (sizes1 = 0; s1[sizes1]; sizes1++)
	{
		string[sizes1] = s1[sizes1];
	}

	for (sizes2 = 0; sizes2 < n; sizes2++)
	{
		string[sizes1 + sizes2] = s2[sizes2];
	}

	string[sizes1 + n] = '\0';
	return (string);
}
