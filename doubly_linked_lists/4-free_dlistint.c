#include "lists.h"
/**
 * free_dlistint - frees the list
 * @head: pointer to the beginning of the list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *actual = head;
	dlistint_t *fnode;

	while (actual != NULL)
	{
		fnode = actual;
		actual = actual->next;
		free(fnode);
	}
}
