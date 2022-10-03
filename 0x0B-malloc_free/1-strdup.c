#include "main.h"
#include <stdlib.h>
#include <string.h>

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

	return (t);


}
