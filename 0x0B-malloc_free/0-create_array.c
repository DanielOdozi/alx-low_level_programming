#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars, and
 * initializes it with a specific char.
 *@size: Size of the array
 *@c: Character to insert
 *Return: NULL if size is zero or if it fails,
 *pointer to array if everything is normal.
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int j = 0;

	t = malloc(size * sizeof(char));

	if (size == 0)
		return (NULL);

	if (t == NULL)
		return (NULL);

	while (j < size)
	{
		t[j] = c;
		j++;
	}

	return (t);
}
