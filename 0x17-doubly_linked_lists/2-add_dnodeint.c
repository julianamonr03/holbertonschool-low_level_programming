#include "lists.h"
/**
 * add_dnodeint - function that adds a new node at the beginning of a list
 * @head: list head
 * @n: data in list
 * Return: address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	/* We create and allocate memory in our new node */
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	/* Assign value for new node*/
	new->n = n;
	/* Previous node we turn in NULL*/
	new->prev = NULL;
	/* Assign new node in list */
	new->next = NULL;

	if (*head)
	{
		new->next = *head;
		/*new->next->prev = new;*/
	}
	(*head) = new;
	return (new);
}
