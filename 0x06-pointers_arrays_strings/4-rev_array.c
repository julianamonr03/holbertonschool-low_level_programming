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
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}
