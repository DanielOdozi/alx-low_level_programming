#include "main.h"

/**
 * puts_half - void
 *
 * @str: string
 *
 */
void puts_half(char *str)
{
	int i = 0;
	int k;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (k = i / 2; str[k] != '\0'; k++)
		{
			_putchar(str[k]);
		}
	}
	else if (i % 2)
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
