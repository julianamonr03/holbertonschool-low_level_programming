#include "lists.h"
/**
 * print_listint - Function that prints all the elements
 * @h: list given
 * Return: Numbers of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t cont_n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next, cont_n++;
	}
	return (cont_n);
}
