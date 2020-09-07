#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data (n) of a list
 * @head: head of list
 * Return: 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)/* While list exist sum data */
	{
		sum += head->n; /* */
		head = head->next;
	}
	return (sum);
}
