#include "holberton.h"
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: 2 dimensional array
 * @height: height
 * Return: No return
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a]);
	}
	free(grid);
}
