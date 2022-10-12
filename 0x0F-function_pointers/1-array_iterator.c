#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - executes a function on each element of arr
 * @array: the arr
 * @size: size of array?
 * @action: the function to execute
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/* declare */
	size_t j;

	if (array == NULL || action == NULL)
		return;

	for (j = 0; j < size; j++)
	{
		(*action)(array[j]);
	}
}
