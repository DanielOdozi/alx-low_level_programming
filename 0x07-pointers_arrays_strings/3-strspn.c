#include "main.h"
#include <string.h>

/**
 * _strspn - get the lenght of prefix substring
 * @s:string
 * @accept:string
 * Return:unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int len;

	len = strspn(s, accept);
	return (len);
}
