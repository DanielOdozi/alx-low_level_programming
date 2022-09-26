#include "main.h"
#include <string.h>

/**
 * _memcpy - copies memory area
 * @dest:char
 * @src:char
 * @n:int
 * Return:char pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	for (i = 0; i < n; i++)
	{
		memcpy (dest, src, strlen(src) + 1);
	}
	return (dest);
}
