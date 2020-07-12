#include "holberton.h"
/**
 * _realloc - unction that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size:  size, in bytes of the allocated space for ptr/
 * @new_size: is the new size, in bytes of the new memory block
 * Return: to the ptr pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (ptr == NULL)
	{
		ptr = malloc(new_size);

		if (ptr == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (ptr);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size > old_size)
	{
		free(ptr);
		ptr = malloc(new_size);
		return (ptr);
	}

	if (new_size == 0 && ptr != '\0')
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}
