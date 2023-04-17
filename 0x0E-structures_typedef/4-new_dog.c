#include "dog.h"
#include <stdlib.h>

/**
  *_strlen- Find length of a string
  *@s: The string
  *
  *Return: Length
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
  *_strcopy- Copies a string
  *@dest: destination string
  *@src: source string
  *
  *Return: 0 success
  */

char *_strcopy(char *dest, char *src)
{
	int len = 0;
	int x;

	while (src[len] != '\0')
	{
		len++;
	}
	for (x = 0; x < len; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);
}

/**
  *new_dog- Creates a new dog
  *@name: dog name
  *@age: dog age
  *@owner: dog owner
  *
  *Return: 0 success Null otherwise
  */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggy;
	int ln1, ln2;

	ln1 = _strlen(name);
	ln2 = _strlen(owner);

	doggy = malloc(sizeof(dog_t));
	if (doggy == NULL)
		return (NULL);
	doggy->name = malloc((ln1 + 1) * sizeof(char));
	if (doggy->name == NULL)
	{
		free(doggy);
		return (NULL);
	}
	doggy->owner = malloc((ln2 + 1) * sizeof(char));
	if (doggy->owner == NULL)
	{
		free(doggy);
		free(doggy->name);
		return (NULL);
	}
	_strcopy(doggy->name, name);
	_strcopy(doggy->owner, owner);
	doggy->age = age;

	return (doggy);
}
