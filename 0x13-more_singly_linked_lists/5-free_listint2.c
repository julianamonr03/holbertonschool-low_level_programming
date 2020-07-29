#include "lists.h"
/**
 * free_listint2 - function that frees a list and sets the head to NULL
 * @head: head pointer
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head)
	{
		while (*head)
		{
			tmp = *head;
			*head = (*head)->next;
			free(tmp);
		}
	}
}
