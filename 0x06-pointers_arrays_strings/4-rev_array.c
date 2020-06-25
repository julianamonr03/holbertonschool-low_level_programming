#include "holberton.h"
/**
 * reverse_array - Reverse an Array
 *@a: An array of integers
 *@n: Numbers of elements in array
 * Return: no return
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n - 1];
		a[n - 1] = j;
		i++;
	}
}
