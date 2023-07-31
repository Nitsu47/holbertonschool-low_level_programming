#include "lists.h"
/**
 * sum_dlistint - sum of all the data in the list
 * @head: pointer to the begininng of the list
 * Return: the sum of the elements of the list
 */
int sum_dlistint(dlistint_t *head)
{
	int count = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		count += head->n;
		head = head->next;
	}
	return (count);
}
