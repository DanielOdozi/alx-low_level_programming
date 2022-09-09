#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int com = 0;

	while (com < 10)
	{
		putchar(48 + com);
		if (com != 9)
		{
			putchar(',');
			putchar(' ');
		}
		com++;
	}
	putchar('\n');
	return (0);
}
