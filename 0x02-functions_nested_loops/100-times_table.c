#include "main.h"


void print_times_table(int n)
{
	int i = 0;

	while (i <= n)
	{
		if (n > 15)
		{
			break;
		}
		else if (n < 0)
		{
			break;
		}
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
