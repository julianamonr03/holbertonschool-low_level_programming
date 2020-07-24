#include "lists.h"
/**
* print_list - print elements of a list_t
* @h: head
* Return: numbers of nodes
*/
size_t print_list(const list_t *h)
{
	int node;

	for (node = 0; h != NULL; node++)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
	}
	return (node);
}
