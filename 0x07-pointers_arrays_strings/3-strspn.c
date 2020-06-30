#include "holberton.h"
/**
 * _strspn - Gets lenght of a prefix
 *
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	int a;
	int b;
	int c = 0;

	for (a = 0; s[a] != ' '; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
			}
		}
	}
	return (c);
}
