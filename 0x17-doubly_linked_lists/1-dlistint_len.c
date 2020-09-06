#include "lists.h"
/**
 * dlistint_len- function that returns the number of elements
 * @h: list header
 * Return: number of elements in dlistint_t
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i = 0; /* Variable for counting elements*/

	while (h) /* While list exist*/
	{
		h = h->next;
		i++;
	}
	return (i);
}
