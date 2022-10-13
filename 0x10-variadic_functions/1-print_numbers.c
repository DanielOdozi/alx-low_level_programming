#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list at;
	unsigned int k;

	if (separator == 'NULL')
		return;

	va_start(at, n);

	for (k = n; k >= 0; k = va_arg(at, int))
	{
		printf("%d ", k);
	}
	va_end(at);
	printf("\n");
}
