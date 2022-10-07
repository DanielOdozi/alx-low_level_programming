#include "main.h"
#include <stdlib.h>
/**
 * _calloc - ...
 * @nmemb: number of members
 * @size: size
 *
 * Return: ...
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int *s;
	int i;

	if (nmemb == 0)
		return (NULL);

	if (size == 0)
		return (NULL);

	i = nmemb * size;

	s = malloc(i);

	if (s == NULL)
		return (NULL);

	return (s);
}
