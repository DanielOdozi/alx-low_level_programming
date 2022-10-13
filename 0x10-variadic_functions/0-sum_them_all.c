#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - To sum up all the numbers
 * @ap: The list of all
 * @n: Constant and cannot chaange
 * @sum: sum of all the numbers
 *
 * Return: To the the sum of all the numbers
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	if (n == 0)
		return (0);

	va_start (ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg (ap, int);

	va_end (ap);
	return (sum);
}
