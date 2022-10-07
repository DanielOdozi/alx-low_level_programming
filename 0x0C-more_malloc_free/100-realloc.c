#include "main.h"
#include <stdlib.h>

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		s = malloc(new_size);

		if (s == NULL)
			return (NULL);

		return (s);
	}
	else
	{
		if (new_size == 0 && ptr != NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	s = malloc(new_size);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < old_size && i < new_size; i++)
	{
		s[i] = ((char *) ptr)[i];
	}

	free(ptr);
	return (s);
}
