#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s:char
 * @b:char
 * @n:unsigned int
 * Return:char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}

	return (s);
}
