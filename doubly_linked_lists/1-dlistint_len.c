#include "lists.h"
/**
 * dlistint_len - return the number of elements in a linked list.
 * @h: pointer to the list.
 * Return: number of nodes.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t numbofe = 0;

	while (h != NULL)
	{
		h = h->next;
		numbofe++;
	}
	return (numbofe);
}
