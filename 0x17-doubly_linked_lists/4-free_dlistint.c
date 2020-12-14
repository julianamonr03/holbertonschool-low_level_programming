#include "lists.h"

/**
 * free_dlistint - free a dlistint_t list.
 * @head: Head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	if (!head)
	{
		return;
	}

	if (head->next)
	{
		free_dlistint(head->next);
	}
	free(head);
}
