#include "lists.h"
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: head list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0; /*-> Variable for travel the list */

	while (h) /* While the list exist, print and increment*/
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i); /*-> Return to the number of nodes*/
}
