#include "dog.h"
/**
 * new_dog - Creates a new dog.
 * @name: Dog´s Name.
 * @age: Dog´s Age.
 * @owner: Dog´s Owner.
 * Return: New Dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogo;
	unsigned int counter;

	dogo = malloc(sizeof(dog_t));

	if (dogo == NULL)
		return (NULL);

	dogo->name = malloc(strlen(name) + 1);

	if (dogo->name == NULL)
	{
		free(dogo->name);
		free(dogo);
		return (NULL);
	}

	dogo->owner = malloc(strlen(owner) + 1);

	if (dogo->owner == NULL)
	{
		free(dogo->owner);
		free(dogo->name);
		free(dogo);
		return (NULL);
	}
	for (counter = 0; counter < strlen(name); counter++)
	{
		dogo->name[counter] = name[counter];
	}
	dogo->name[counter] = '\0';

	for (counter = 0; counter < strlen(owner); counter++)
	{
		dogo->owner[counter] = owner[counter];
	}
	dogo->owner[counter] = '\0';
	dogo->age = age;
	return (dogo);
}
