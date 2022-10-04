#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a
 *2 dimensional array of integers.
 *@width: width oàf array
 *@height: height of array
 *
 *Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int **s;
	int i, size;

	if (width <= 0)
		return (NULL);

	if  (height <= 0)
		return (NULL);

	s = (int **) malloc(sizeof(int *) * height);

	if (s != NULL)
	{
		for (i = 0; i < height; i++)
		{
			s[i] = (int *) malloc(sizeof(int) * width);
			if (s[i] != NULL)
			{
				for (size = 0; size < width; size++)
					s[i][size] = 0;
			}
			else
			{
				while (i >= 0)
				{
					free(s[i]);
					i--;
				}
				free(s);
				return (NULL);
			}
		}
		return (s);
	}
	else
	{
		return (NULL);
	}
}
