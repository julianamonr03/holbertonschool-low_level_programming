#include "lists.h"
/**
* free_list - Function that frees a list_t list.
* @head: Head
*/
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head->str);
		free(head);
		head = head->next;
	}
}
