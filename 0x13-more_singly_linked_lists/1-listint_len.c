#include "lists.h"
/**
 * listint_len - Function that returns the number of elements
 * @h: head pointer
 * Return: Number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t numb_el = 0;

	while (h)
	{
		h = h->next, numb_el++;
	}
	return (numb_el);
}
