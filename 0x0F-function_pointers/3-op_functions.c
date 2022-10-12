#include "3-calc.h"
#include <stdlib.h>
/**
 * @op_add - return the addition of and b
 * @a: first number
 * @b: second number
 *
 * Return : sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * @op_sub - returns the subtraction of a and b
 * @a: first number
 * @b: second number
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * @op_mul - multiplies a and b
 * @a: first number
 * @b: second number
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * @op_div - divides a and b
 * @a: first number
 * @b: second number
 *
 * Return: the quotient of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * @op_mod - find the remainder of division of a and b
 * @a: first number
 * @b: second number
 *
 * Return: The remainder of the division of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
