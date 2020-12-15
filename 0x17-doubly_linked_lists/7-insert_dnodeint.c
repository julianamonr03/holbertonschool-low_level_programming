#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: head of the list
 * @n: data
 * @idx: index of list
 * Return: address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *aux = *h;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	/*We start addying node is the idx is 0 */
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (aux) /* While our auxiliar variable exist */
	{
		if (i == idx - 1 && aux->next != NULL)
			/*Verify that we are not in last position*/
		{
			new->n = n;
			new->next = aux->next;
			new->prev = aux;
			aux->next->prev = new;
			aux->next = new;
		}
		/*If we are in the last position we add a node at the end*/
		else if (i == idx - 1 && aux->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		aux = aux->next, i++; /*We travel in the list*/
	}
	/*
	 * if it is not possible to add the new node at index idx,
	 * do not add the new node and return NULL
	*/
	if (idx > i)
		return (NULL);

	return (new);
}
