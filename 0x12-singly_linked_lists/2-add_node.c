#include "lists.h"
/**
* add_node - function that adds a new node at the beginning of a list_t list
* @head: head
* @str: String
* Return: the address of the new element, or NULL if it failed
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int count;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	for (count = 0; str[count] != '\0'; count++)
		;
	new->len = count; /*Counting the lenght of the string*/
	new->str = strdup(str); /*Copy the string*/
	new->next = *head; /*Points to the next node*/
	*head = new;

	return (*head);
}
