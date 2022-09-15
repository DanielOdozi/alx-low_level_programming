#include "main.h"

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
