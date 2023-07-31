#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of the list.
 * @head: double pointer to the beginning of the list.
 * @n: value to put in the new node.
 * Return: adress of the new node or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *lastnode = *head;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (lastnode)
	{
		while (lastnode->next != NULL)
			lastnode = lastnode->next;
		newnode->prev = lastnode;
		lastnode->next = newnode;
	}
	else
	{
		*head = newnode;
		newnode->prev = NULL;
	}
	newnode->next = NULL;
	return (newnode);
}
