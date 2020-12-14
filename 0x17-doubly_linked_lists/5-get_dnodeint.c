#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of list.
 * @head: Head of the list
 * @index: index
 * Return: if the node does not exist, return NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0; /*Variable to find the index*/

	while (head)
	{
		if (i == index)
		{
			return (head);
		}
			i++;
			head = head->next;
	}
	return (NULL);
}
