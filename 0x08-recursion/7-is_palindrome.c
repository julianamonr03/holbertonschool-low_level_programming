#include "holberton.h"
int find_pal(char *s, int a, int b);
int _stringleng(char *s);

/**
 * is_palindrome - Function that returns if a string is a palindrome
 * @s: String
 * Return: 1 If a string is a palindrome or 0 if is not
 */
int is_palindrome(char *s)
{
	int len;

	len = _stringleng(s);

	return (find_pal(s, 0, len - 1));
}
/**
 * _stringleng - returns the lenght of string
 * @s: String
 * Return: lenght of string
 */
int _stringleng(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _stringleng(s + 1));
}
/**
 * find_pal - Find if the string is palindrome
 * @s: String
 * @a: variable
 * @b: Lenght of string
 * Return: 1 if is palindrome or 0 if is not
 */
int find_pal(char *s, int a, int b)
{
	if (a >= b)
	{
		return (1);
	}
	if (*(s + a) != *(s + b))
	{
		return (0);
	}
	else
	{
		return (find_pal(s, a + 1, b - 1));
	}
}
