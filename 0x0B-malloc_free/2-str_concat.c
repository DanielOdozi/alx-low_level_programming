#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 *@s1:First string
 *@s2:Second string
 *
 *Return: NULL in case of failure , but pointer to new string in
 *case of success
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, size = 0, cont = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		size++;

	s = malloc(sizeof(char) * size);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[cont++] = s1[i];

	for (i = 0; s2[i]; i++)
		s[cont++] = s2[i];

	return (s);
}
