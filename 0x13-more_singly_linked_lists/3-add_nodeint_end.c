#include "lists.h"
/**
 * add_nodeint_end - Function that adds new node at the end of a list
 * @head: head pointer
 * @n: int
 * Return: the address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nd = malloc(sizeof(listint_t)), *tail = *head;

	if (new_nd == NULL)
	{
		return (NULL);
	}

	new_nd->n = n;
	new_nd->next = NULL;

	if (*head == NULL)
	{
		*head = new_nd;
	}

	else
	{
		while (tail->next)

			tail = tail->next;
		tail->next = new_nd;
	}
	return (*head);
}
