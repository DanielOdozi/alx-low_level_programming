#include "main.h"

/**
 * print_array - print n of int array
 * @a: pointer
 * @n: n
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (n-- > 0)
	{
		printf("%i", a[i++]);
		if (n != 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
