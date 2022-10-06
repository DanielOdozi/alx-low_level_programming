#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: the size to allocate
 *
 * Return: Nothing.
 */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b);

	if (s == NULL)
		exit(98);

	return (s);
}
