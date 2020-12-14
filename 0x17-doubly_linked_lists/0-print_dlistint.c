#include "lists.h"
/**
 * print_dlistint -  prints all the elements of a dlistint_t list
 * @h: Head of the list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t travel = 0; /* Variable for travel the list */

	/* While the list exist travel and increment */
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		travel++;
	}
	return (travel);
}
