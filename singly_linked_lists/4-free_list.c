#include "lists.h"
/**
 * free_list -  frees a list
 * @head: first list to free
 */
void free_list(list_t *head)
{
	if (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
		free_list(head->next);
		free(head);
	}
}
