#include "main.h"
/**
 * _isalpha - check alphabets
 * @c: param
 * Return: always
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
