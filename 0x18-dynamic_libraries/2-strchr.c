#include "main.h"
#include <string.h>

/**
 * _strchr - locate a character in a string
 * @s:string
 * @c:char
 * Return:pointer to char*
 */
char *_strchr(char *s, char c)
{
	char *ptr;

	ptr = strchr(s, c);
	return (ptr);
}
