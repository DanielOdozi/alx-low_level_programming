#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
	int **s;
	int i, size;
	int *j;
	int *k;

	j = &width;
	k = &height;

	if (width <= 0)
		return (NULL);

	if  (height <= 0)
		return (NULL);

	for (i = 0; j[i] || k[i]; i++)
		size++;

	s = (int **) malloc(sizeof(int *) * size);

	if (s == NULL)
		return (NULL);

	while (i < size)
	{
		s[i] = j;
		s[i] = k;
		i++;
	}
	free(s);
	return (s);
}
