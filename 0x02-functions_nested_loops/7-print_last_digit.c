#include "main.h"

/**
 * print_last_digit - a function that prints the last digit of a number
 * @as: number's last digit result
 * Return: value of the last digit
 */
int print_last_digit(int as)
{
	int add;

	add = as % 10;
	if (add < 0)
	{
		add = (add * -1);
	}
	_putchar(add + '0');
	return (add);
}
