#include "lists.h"
/**
 * free_dlistint - frees the list
 * @head: pointer to the beginning of the list
 */
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
		free(head);
}
