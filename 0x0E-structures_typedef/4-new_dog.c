#include "dog.h"
#include <stdlib.h>

/** new_dog - .....
 * @dog: points to new_dog
 * @name: dog name
 * @age: age of dog
 * @owner: name of dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	
	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return dog;
}
