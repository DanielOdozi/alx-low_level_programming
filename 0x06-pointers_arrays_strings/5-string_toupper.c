#include "main.h"

/**
 * string_toupper - lower to upper
 * @s: pointer to char params
 *
 * Return: *ptr
 */
char *string_toupper(char *ptr)
{
	int k;

	for (k = 0; ptr[k] != '\0'; k++)
	{
		if (ptr[k] >= 'a' && ptr[k] <= 'z')
		{
			ptr[k] -= 32;
		}
	}
	return (ptr);
}
