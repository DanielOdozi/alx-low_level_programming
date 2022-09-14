#include "main.h"


void print_times_table(int n)
{
	int i, k;

	if (n >= 0 && n < 15)
	{
		for (i <= 0; i >= n; i++)
		{
			for (k <= 0; k >= n; k++)
			{
				if ((i * j) < 10)
				{
					if (j != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if ((i * j) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar(((i * j) % 10) + '0');
				}
				else if ((i * j) < 1000)
				{
					_putchar(' ');
					_putchar((((i * j) / 100) % 10) + '0');
					_putchar((((i * j) / 10) % 10) + '0');
					_putchar((((i * j) % 10) + '0');
				}
			if (j != (n))
			{
				_putchar(',');
			}

			}
		}
	}
	_putchar('\n');
}
