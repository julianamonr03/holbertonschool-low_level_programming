#include "lists.h"
/**
* add_node_end - function that adds a new node at the end of a list_t list
* @head: head
* @str: str
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	list_t *currentnode;
	int cont;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	if (*head != NULL)
	{
		currentnode = *head;
		for (cont = 0; currentnode->next != NULL; cont++)

			currentnode = currentnode->next;

			currentnode->next = newnode;
	}
	else
	{
		*head = newnode;
	}

	newnode->next = NULL;
	newnode->str = strdup(str);
	for (cont = 0; str[cont] != '\0'; cont++)
		;
	newnode->len = cont;

	return (newnode);
}
