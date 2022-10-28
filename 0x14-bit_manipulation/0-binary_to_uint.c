#include "main.h"

/**
 * _pow - raises a number to another
 * @x: the number
 * @y: the power
 *
 * Return: x raised to the power of y
 */
unsigned int _pow(unsigned int x, unsigned int y)
{
	if (!y)
		return (1);
	return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: strings of 0 and 1
 *
 * Return: the converted number or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, len = 0, uint = 0;
	char ch[2];

	if (b == NULL)
		return (0);
	len = strlen(b) - 1;

	for (i = 0; i < strlen(b); i++)
	{
		if (isdigit(b[i]))
		{
			ch[0] = b[i];
			uint += atoi(ch) * _pow(2, len);
			len--;
		}
		else
			return (0);
	}
	return (uint);
}
