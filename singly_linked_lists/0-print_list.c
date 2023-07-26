#include "lists.h"
/**
 * print_list - prints all the content in the list
 * @h: pointer to structure
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int leng = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		leng++;
		h = h->next;
	}
	return (leng);
}
