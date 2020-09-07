#include "lists.h"
/**
 * free_dlistint - function that free a list
 * @head: head list
 */
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	{
		return;
	}
	if (head->next)
	{
		free_dlistint(head->next);
	}
	free(head);
}
