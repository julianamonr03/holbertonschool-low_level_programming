#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n) of a dlistint_t list.
 * @head: Head of the list
 * Return: if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0; /*Variable for sum the data*/

	while (head)
	{
		sum += head->n; /*Sum the data in the nodes*/
		/*Travel the list for sum  all the data saved in it*/
		head = head->next;
	}
	return (sum);
}
