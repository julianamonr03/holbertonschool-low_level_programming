#include "holberton.h"
/**
 * cap_string - Capitalizes words of a string
 *@s: String
 * Return: string
 */
char *cap_string(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			if (a == 0)
			{
				s[a] = s[a] - 32;
			}

			if (s[a - 1] == '\t' ||
			    s[a - 1] == '\n' ||
			    s[a - 1] == ' ' ||
			    s[a - 1] == ',' ||
			    s[a - 1] == ';' ||
			    s[a - 1] == '.' ||
			    s[a - 1] == '!' ||
			    s[a - 1] == '?' ||
			    s[a - 1] == '"' ||
			    s[a - 1] == '(' ||
			    s[a - 1] == ')' ||
			    s[a - 1] == '{' ||
			    s[a - 1] == '}')
			{
				s[a] = s[a] - 32;
			}
		}
		a++;
	}
	return (s);
}
