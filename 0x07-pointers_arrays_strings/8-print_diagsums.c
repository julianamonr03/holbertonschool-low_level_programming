#include "holberton.h"
/**
 * print_diagsums - Sum of two diagonals of a square matrix
 * @a: square matrix
 * @size: Size of matrix array given
 * Return: No return
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagonal = 0;
	int diagonal2 = 0;

	for (i = 0; i < size; i++)
	{
		diagonal += a[(size * i) + i];
		diagonal2 += a[(size * (i + 1)) - (i + 1)];
	}
	printf("%d, %d\n", diagonal, diagonal2);
}
