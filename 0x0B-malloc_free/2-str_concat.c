#include "holberton.h"
/**
 * str_concat - function that concatenates two strings
 * @s1: String 1
 * @s2: String 2
 * Return: Return to Final string
 */
char *str_concat(char *s1, char *s2)
{
	int sizes1, sizes2, fsize, sum;
	char *finalstring = NULL;

	for (sizes1 = 0; s1[sizes1] != '\0'; sizes1++)
		;
	for (sizes2 = 0; s2[sizes2] != '\0'; sizes2++)
		;

	sum = sizes1 + sizes2 + 1;

	finalstring = malloc(sizeof(char) * sum);

	if (finalstring == '\0')
	{
		return ('\0');
	}

	for (fsize = 0; fsize < sizes1; fsize++)
	{
		finalstring[fsize] = s1[fsize];
	}

	for (fsize = 0; fsize < sizes2 + 1; fsize++)
	{
		finalstring[sizes1 + fsize] = s2[fsize];
	}

	return (finalstring);
}
