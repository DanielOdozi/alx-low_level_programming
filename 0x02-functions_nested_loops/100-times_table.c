#include "main.h"


void print_times_table(int n)
{
	int i, k;

	if (n >= 0 && n < 15)
	{
		for (i = 0; i >= n; i++)
		{
			for (k = 0; k >= n; k++)
			{
				if ((i * k) < 10)
				{
					if (k != 0)
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
						_putchar(' ');
					}
				}
				else if ((i * k) < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((((i * k) / 10) % 10) + '0');
					_putchar(((i * k) % 10) + '0');
				}
				else if ((i * k) < 1000)
				{
					_putchar(' ');
					_putchar((((i * k) / 100) % 10) + '0');
					_putchar((((i * k) / 10) % 10) + '0');
					_putchar(((i * k) % 10) + '0');
				}
			if (k != (n))
			{
				_putchar(',');
			}

			}
		}
	}
	_putchar('\n');
}
