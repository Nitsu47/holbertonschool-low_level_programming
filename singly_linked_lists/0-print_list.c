#include "lists.h"
/**
 *
 *
 */
size_t print_list(const list_t *h)
{
	int len = 0;

	while (h)
	{
		h = h->next;
		if (!h)
			printf("[0] (nil)\n");
		else
			printf("[%u]%s\n"), h->len, h->str;
	}
	return (len);
}
