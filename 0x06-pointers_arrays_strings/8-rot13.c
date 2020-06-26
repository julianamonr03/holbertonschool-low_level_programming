#include "holberton.h"
/**
 * rot13 - Encode a string using rot13
 *@s: string
 * Return: return to string
 */
char *rot13(char *s)
{
	int a, b;
	char array[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char array2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for  (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; array[b] != '\0'; b++)
		{
			if (s[a] == array[b])
			{
				s[a] = array2[b];
				break;
			}
		}
	}
	return (s);
}
