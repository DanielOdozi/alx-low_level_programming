#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogs;

	dog = malloc(sizeof(dog_t));

	if (dogs == NULL)
		return (NULL);

	dogs->name = strdup(name);

	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}

	dogs->age = age;

	dogs->owner = strdup(owner);

	if (dogs->owner == NULL)
	{
		free(dogs->name);
		free(dogs);
		return (NULL);
	}

	return (dogs);
}
