#include "main.h"
/**
 * _strncpy - Copy string starting from index 0 of `dest`.
 * @dest: string
 * @src: string
 * @n: number of char to copy
 * Return: `dest` edited string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; n > i; i++)
		dest[i] = '\0';

	return (dest);
}
