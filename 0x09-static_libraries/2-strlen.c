#include "main.h"
/**
 * _strlen - Return the length of a string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}
