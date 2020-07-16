#include "function_pointers.h"
/**
 * int_index - Function that searches for an integer
 * @size: # of elements in array
 * @array: search elements-array
 * @cmp: search int
 * Return: returns the index of the first element for which the cmp function
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (size <= 0 || !array || !cmp)
		return (-1);

	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]))
			return (a);
	}
	return (-1);
}
