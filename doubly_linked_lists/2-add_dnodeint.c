#include "lists.h"
/**
 * add_dnodeint - adds a new node at the head.
 * @head: pointer to pointer to head of list.
 * @n: value to add to the new node.
 * Return: adress of new node or Null if it fails.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->prev = NULL;

	if (*head != NULL)
		(*head)->prev = newnode;

	newnode->next = *head;
	*head =  newnode;

	return (newnode);
}
