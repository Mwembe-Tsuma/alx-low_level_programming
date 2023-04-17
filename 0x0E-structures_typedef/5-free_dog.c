#include "main.h"
#include <stdlib.h>

/**
  * free_dog- Frees dog
  * @d: pointer
  *
  * Return: Nothing
  */

void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->owner);
		free(d->name);
		free(d);
	}
}

