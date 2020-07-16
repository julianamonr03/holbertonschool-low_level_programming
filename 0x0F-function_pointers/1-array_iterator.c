#include "function_pointers.h"
/**
 * array_iterator - function that executes a function given as a parameter
 * on each element of an array
 * @action: Prints elements
 * @size: # elements
 * @array: Array
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array && action)
		while (i < size)
		{
			action(array[i]);
			i++;
		}
}
