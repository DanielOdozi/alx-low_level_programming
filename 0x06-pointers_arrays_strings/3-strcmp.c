#include "main.h"

/**
 * _strcmp - compare
 * @s1 : pointerto char params
 * @s2 : pointer to char params
 * Return: k
 */
int _strcmp(char *s1, char *s2)
{
	int i;
	int k;

	i = 0;

	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	k = s1[i] - s2[i];
	
	return (k);
}
