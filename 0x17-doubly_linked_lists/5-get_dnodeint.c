#include "lists.h"
/**
 * get_dnodeint_at_index - function that returns the nth node of list.
 * @head: head of list
 * @index:  index of the node, starting from 0
 * Return: NULL is doedn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		i++;
		head = head->next;
	}
	return (NULL);
}
