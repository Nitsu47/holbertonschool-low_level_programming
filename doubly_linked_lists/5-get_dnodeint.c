#include "lists.h"
/**
 * get_dnodeint_at_index -  returns the nth node of a linked list
 * @head: pointer to the begininng of the list
 * @index: index of the node
 * Return: the first node of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	for (; count < index; count++)
	{
		if (count == index)
			break;
		if (head)
			head = head->next;
		else
			return (NULL);
	}
	return (head);
}
