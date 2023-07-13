#include "dog.h"
/**
 * free_dog - frees the dog
 * @d: Dog´s info
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d->name);
	free(d->owner);
	free(d);
}
