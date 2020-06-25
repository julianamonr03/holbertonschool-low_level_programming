#include "holberton.h"
/**
 * _strcmp - Compares two strings
 *@s1: String 1
 *@s2: String 2
 * Return: return to compare strings
 */
int _strcmp(char *s1, char *s2)
{

	int a = 0;
	int b;

	while (s1[a] || s2[a])
	{
		if (s1[a] == s2[a])
		{
			b = 0;
		}

		else
		{
			b = s1[a] - s2[a];
			break;
		}
		a++;
	}
	return (b);
}
