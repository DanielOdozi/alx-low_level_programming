#include "main.h"

/**
 * rot13 - encoder rot13
 * @s: pointer to string params
 *
 * Return: *c
 */
char *rot13(char *c)
{
	int i;
	
	for (i = 0; c[i] != '\0'; i++)
	{
		if ((c[i] >= 'a' && c[i] < 'n') || (c[i] >= 'A' && c[i] < 'N'))
		{
			c[i] += 13;
		}
		else if ((c[i] > 'm' && c[i] <= 'z') || (c[i] > 'M' && c[i] <= 'Z'))
		{
			c[i] -= 13;
		}
	}
	return (c);
}
