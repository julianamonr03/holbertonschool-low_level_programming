#include "holberton.h"
/**
 * leet - Encode a string
 *@s: string
 * Return: return to string
 */
char *leet(char *s)
{
	int a = 0, b;
	char array[] = {'A', 'a', 'E', 'e', 'O', 'o', 'T', 't', 'L', 'l'};
	int arrNum[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (s[a])
	{
		for (b = 0; b < 10; b++)
		{
			if (s[a] == array[b])
			{
				s[a] = arrNum[b];
			}
		}
		a++;
	}
	return (s);
}
