#include "main.h"

/**
 * rot13 - encoder rot13
 * @c: pointer to string params
 *
 * Return: *c
 */
char *rot13(char *c)
{
	int i;
	int j;
	
	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] < 'n')
		{
			c[i] += 13;
		}
		else if (c[i] > 'm' && c[i] <= 'z')
		{
			c[i] -= 13;
		}
		for (j = 0; c[j] != '\0'; j++)
		{
			if (c[j] >= 'A' && c[j] < 'N')
			{
				c[j] += 13;
			}
			else if (c[j] > 'M' && c[j] <= 'Z')
			{
				c[j] -= 13;
			}
		}
	}

	return (c);
}
