#include "main.h"
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, cont = 0, k = 0, l = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		n++;

	k = strlen(s2);

	if (n >= k)
		l = i + k;
	else
		l = i + n;

	s = malloc(sizeof(char) * l + 1);

	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		s[cont++] = s1[i];

	for (i = 0; s2[i]; i++)
		s[cont++] = s2[i];

	return (s);
}
