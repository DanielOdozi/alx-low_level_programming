#include "main.h"
#include <string.h>

/**
 * _strlen - length of a string
 * @s: input char
 * Return: length of a string
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
