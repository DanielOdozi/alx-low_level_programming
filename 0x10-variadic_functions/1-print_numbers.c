#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - Entry point
 * Desc: Entry
 *@n: int value
 *@separator: char
 * Return: Always 0 (Success)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list at;
	unsigned int k;

	va_start(at, n);

	for (k = 0; k < n; k++)
	{
		printf("%d", va_arg(at, int));
		if (separator != 0 && k < n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(at);
	printf("\n");
}
