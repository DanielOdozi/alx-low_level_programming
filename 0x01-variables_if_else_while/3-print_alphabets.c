#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	char alp = 'a';
	char all = 'A';

	while (alp <= 'z')
	{
		putchar(alp);
		alp++;
	}
	while (all <= 'Z')
	{
		putchar(all);
		all++;
	}
	putchar('\n');
	return (0);
}
