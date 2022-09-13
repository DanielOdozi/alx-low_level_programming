#include "main.h"

int print_last_digit(int as)
{
	int add;

	add = as % 10;
	if (add < 0)
	{
		add = (add * -1);
	}
	_putchar(add);
}
