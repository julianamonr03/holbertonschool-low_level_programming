#include "lists.h"
/**
* list_len - function that returns the number of elements in linked list_t list
* @h: head
* Return: counter
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	counter = 0;
	while (h != NULL)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
