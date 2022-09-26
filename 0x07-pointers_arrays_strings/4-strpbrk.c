#include "main.h"
#include <string.h>

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s:string
 * @accept:string
 * Return:char
 */
char *_strpbrk(char *s, char *accept)
{
	char* r = strpbrk(s, accept);

	if (r != 0)
	{
		return (r);
	}
	else
	{
		return (0);
	}
}
