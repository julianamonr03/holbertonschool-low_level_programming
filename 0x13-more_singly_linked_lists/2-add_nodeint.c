#include "lists.h"
/**
 * add_nodeint - Function that adds node at the beginning of a list
 * @head: head pointer
 * @n: element
 * Return: The address of the new element or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{

	listint_t *new_nd = malloc(sizeof(listint_t));

	if (new_nd == NULL)
	{
		return (NULL);
	}
	new_nd->n = n;
	new_nd->next = *head;
	*head = new_nd;

	return (*head);
}
