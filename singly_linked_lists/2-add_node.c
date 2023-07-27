#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to a pointer to a head structure
 * @str: pointer to a string that adds a nodei
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *space;
	size_t lenght;

	space = malloc(sizeof(list_t));
	if (space == NULL)
		return (NULL);

	for (lenght = 0; str[lenght]; lenght++)
	{
	}
	space->str = strdup(str);
	space->len = lenght;
	space->next = *head;
	*head = space;

	return (*head);
}
