#include "main.h"
/**
 * *_strcpy - see description
 * @dest: char typ
 * @src: char typ
 * Description: copy string pointed to by src
 * to buffer pointed to by dest
 * Return: pointer to `dest`
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
