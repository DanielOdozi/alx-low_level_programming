#include "3-calc.h"
/**
 * @op_add - return the addition of a and b
 *
 * return - success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * @op_sub - returns the subtraction of a and b
 *
 * return - success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * @op_mul - multiplies a and b
 *
 * return - success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * @op_div - divides a and b
 *
 * return - success
 */
int op_div(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * @op_mod - find the remainder of division of a and b
 *
 * return - success
 */
int op_mod(int a, int b)
{
	if (b <= 0 || b > a)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
