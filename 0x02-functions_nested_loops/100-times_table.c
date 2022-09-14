#include "main.h"


void print_times_table(int n)
{
	int i = 0;

	while (n <= i)
	{
		if (n > 15)
		{
			break;
		}
		else if (n < 0)
		{
			break;
		}
		_putchar(n);
		n++;
	}
	_putchar('\n');
}
