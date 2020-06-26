#include "holberton.h"
/**
 * string_toupper - Change string to uppercase
 *@s: String
 * Return: return to string
 */
char *string_toupper(char *s)
{
	int a = 0;

	while (s[a])
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] = s[a] - 32;
		}
		a++;
	}
	return (s);
}
