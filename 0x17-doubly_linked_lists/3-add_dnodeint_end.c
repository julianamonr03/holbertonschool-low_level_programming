#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: Head of the list
 * @n: data
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *aux = malloc(sizeof(dlistint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = n;
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}

	else
	{
		aux = *head; /* Passing head value to auxiliar node */
		while (aux->next)
		{
			aux = aux->next;
		}
		/*Assing last auxiliar node to the new node*/
		aux->next = new;
		new->prev = aux;
		new->next = NULL;
	}
	return (new);
}
