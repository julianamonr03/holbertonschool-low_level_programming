#include "lists.h"
/**
 * free_listint - Function that frees list
 * @head: head pointer
 * Return: no return
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
