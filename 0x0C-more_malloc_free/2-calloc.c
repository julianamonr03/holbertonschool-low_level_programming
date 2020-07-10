#include "holberton.h"
/**
 * _calloc - Function that allocates memory for an array, using malloc
 * @nmemb: # of elemtns
 * @size: Bytes
 * Return: Pointer to the allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *str;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	str = malloc(nmemb * size);

	if (str == '\0')
	{
		return (NULL);
	}

	for (a = 0; a < nmemb * size; a++)
	{
		str[a] = 0;
	}

	return (str);
}
