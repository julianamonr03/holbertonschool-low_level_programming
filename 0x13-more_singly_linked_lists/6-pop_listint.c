#include "lists.h"
/**
 * pop_listint - Function that deletes the head node of a list
 * @head: head pointer
 * Return: head node
 */
int pop_listint(listint_t **head)
{
	listint_t *new_nd;
	int n;

	new_nd = *head;

	if (*head == NULL)
	{
		return (0);
	}

	n = (*head)->n;
	*head = new_nd->next;
	free(new_nd);

	return (n);
}
