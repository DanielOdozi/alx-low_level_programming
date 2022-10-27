#include "main.h"
/**
 * binary_to_uint - Converts binary to decimals.
 * @b: A pointer to the binary.
 * Return: Returns the converted binary.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, weight = 1, i, k;

	if (b == NULL)
		return (0);

	i = atoi(b);

	while (i != 0)
	{
		k = i % 10;
		decimal += k * weight;
		i = i / 10;
		weight = weight * 2;
	}

	return (decimal);
}
