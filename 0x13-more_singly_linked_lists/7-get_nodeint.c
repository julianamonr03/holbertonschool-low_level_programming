#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of a list
 * @head: head pointer
 * @index: index of the node, starting at 0
 * Return: nth node of a listint_t or NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont;

	if (head == NULL)
	{
		return (NULL);
	}
	for (cont = 0; cont < index && head != NULL; cont++)
	{
		head = head->next;
	}
	if (cont == index)
	{
		return (head);
	}
	return (NULL);
}
