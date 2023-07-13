#ifndef dog_h
#define dog_h
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * struct dog - Dog´s info
 * @name: Dog´s name
 * @owner: Dog´s owner
 * @age: Dog´s age
 */
struct dog
{
	char *name;
	char *owner;
	float age;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* dog_h */
