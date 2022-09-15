#include "main.h"

/**
 * print_diagonal - Print diagonal line dependent on the integer n.
 * @n : The number of lines using '\' characters to use
 * Return: Void.
 */
void print_diagonal(int n)
{
	int x;
	int i;

	for (x = 0; x < n; x++)
	{
		for (i = 0; i < x; i++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (x <= 0)
	{
		_putchar('\n');
	}
}
