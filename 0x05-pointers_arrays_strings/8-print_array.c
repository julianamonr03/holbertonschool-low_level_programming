#include "holberton.h"
/**
 * print_array - Entry point
 *@a: Array
 *@n: Numbers of elements to be printed
 * Return: no return
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
