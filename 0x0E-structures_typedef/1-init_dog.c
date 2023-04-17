#include "dog.h"
#include <stdlib.h>

/**
  *init_dog- A function to initialize struct dog
  *@name: dog name
  *@age: dog age
  *@owner: dog owner
  *@d: Pointer to struct dog
  *
  *Return: Nothing
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
