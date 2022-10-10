#include "dog.h"
#include <stdlib.h>
/**
 * _strdup - malloc new str and copy *str into it
 * @str: the string we copy
 * Return: pointer to new string
 */
char *_strdup(char *str)
{
	char *dest;
	unsigned int i;
	int count = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		count++;
	}
	count += 1;
	dest = malloc(count * sizeof(char));
	if (dest == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
		dest[i] = str[i];
	}
	dest[i] = str[i];
	return (dest);
}
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

	dogs = malloc(sizeof(dog_t));

	if (dogs == NULL)
		return (NULL);

	dogs->name = _strdup(name);

	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}

	dogs->age = age;

	dogs->owner = _strdup(owner);

	if (dogs->owner == NULL)
	{
		free(dogs->name);
		free(dogs);
		return (NULL);
	}

	return (dogs);
}
