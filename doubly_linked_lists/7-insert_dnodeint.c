#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a new node at index.
 * @h: pointer to pointer to head.
 * @idx: index of the list.
 * @n: value to be added in the new node.
 * Return: the adress of the new node or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *aux = *h;
	unsigned int count = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (newnode == NULL)
		return (NULL);

	while (count < idx)
	{
		aux = aux->next;
		count++;
	}
	if (count < idx)
		return (NULL);

	newnode->n = n;
	(aux)->next->prev = newnode;
	newnode->prev = aux;
	newnode->next = (aux)->next;
	(aux)->next = newnode;
	return (newnode);
}
