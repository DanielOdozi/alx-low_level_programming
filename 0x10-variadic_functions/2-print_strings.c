#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - Entry point
 * Desc: Entry
 *@n: int value
 *@separator: char
 * Return: Always 0 (Success)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *l;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		l = va_arg(ap, char*);
		if (l == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", l);
		}
		if (separator != 0 && i < n -1)
		{
			printf("%s", separator);
		}
	}

	va_end(ap);
	printf("\n");
}
