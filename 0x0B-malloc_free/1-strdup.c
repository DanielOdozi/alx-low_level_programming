#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated
 *space in memory, which contains a copy of the
 *string given as a parameter.
 *@str:String to be copied
 *
 *Return: NULL in case of error, pointer to allocated
 *space
 */

char *_strdup(char *str)
{
	char *t;
	int i, size;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	t = malloc(sizeof(char) * (size + 1));
	
	if (t == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		t = strdup(str);

	t[size] = '\0';

	return (t);


}
