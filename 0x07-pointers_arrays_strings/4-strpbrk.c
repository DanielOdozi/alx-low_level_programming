#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s:string
 * @accept:string
 * Return:r
 */
char *_strpbrk(char *s, char *accept)
{
	char* r = strpbrk(s, accept);

	return (r);
	return ('\0');
}
