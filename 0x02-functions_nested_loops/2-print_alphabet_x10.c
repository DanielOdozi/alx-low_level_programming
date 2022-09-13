#include "main.h"

/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: Always 0 (Succes)
 */
void print_alphabet_x10(void)
{
	int i;
	int n = 1;

	while (n <= 10)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		n++;
		_putchar('\n');
	}
}
