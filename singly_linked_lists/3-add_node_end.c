#include "lists.h"
/**
 * add_node_end - adds a copy of str as a new node at the end.
 * @head: pointer to the list which the new node will be added.
 * @str: value of str
 * Return: adress of new element or NULL if it fails.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *spacex;
	list_t *lastn;

	spacex = malloc(sizeof(list_t));

	spacex->str = strdup(str);
	if (spacex == NULL)
		return (NULL);

	spacex->len = strlen(str);
	spacex->next = NULL;

	if (*head == NULL)
		*head = spacex;
	else
	{
		lastn = *head;
		while (lastn->next != NULL)
			lastn = lastn->next;
	}
	*head = spacex->next;
	return (spacex);
}
