#include "holberton.h"
/**
 * rev_string - Entry point
 *@s: string to reverse
 * Return: no return
 */
void rev_string(char *s)
{
	char tempString[10];
	int i = 0;
	int j = 0;
	int k = 0;

	while (s[i + 1] != '\0')
	{
		i++;
	}

	k = i;

	while (i >= 0)
	{
		tempString[j] = s[i];
		i--;
		j++;
	}

	i = 0;
	while (i <= k)
	{
		s[i] = tempString[i];
		i++;
	}
}
