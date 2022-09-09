#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char all = 'a';

	while (all <= 'z')
	{
		if (all == 'q' || all == 'e')
		{
			all += 1;
		}
		else
		{
			putchar(all);
			all += 1;
		}
	}
	putchar('\n');
	return (0);
}
