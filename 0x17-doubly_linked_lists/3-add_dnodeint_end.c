#include "lists.h"
/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: list head
 * @n: data of nodes
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)); /*New node*/
	dlistint_t *node_aux = NULL; /*Auxiliar variable*/

	if (!new)
	{
		return (NULL);
	}

	new->n = n; /*Pass the data to new node*/
	new->next = NULL;

	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node_aux = *head; /*Passing head value to auxiliar variable*/
		while (node_aux->next) /*Moving into the list*/
		{
			node_aux = node_aux->next;
		}
		node_aux->next = new; /*Assign last auxiliar node*/
		new->prev = node_aux; /*to the new node*/
		new->next = NULL;
	}
	return (new);
}
