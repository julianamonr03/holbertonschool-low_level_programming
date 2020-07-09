#include "holberton.h"
/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers
 * @width: Width of array
 * @height: Height of aray
 * Return: Return to matrix
 */
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(sizeof(int) * width);
		if (matrix == NULL)
		{
			for (; i >= 0; i--)
				free(matrix[i]);

			free(matrix);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			matrix[i][j] = 0;
		}
	}
	return (matrix);
}
