#include "holberton.h"
/**
 * array_range - function that creates an array of integers
 * @min: min value
 * @max: max value
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *array, i;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));

	if (array == '\0')
	{
		return (NULL);
	}

	for (i = 0; i < (max - min + 1); i++)
	{
		array[i++] = min++;
	}
	return (array);
}
