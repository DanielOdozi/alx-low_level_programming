#include "main.h"
#include <string.h>

/**
 * _strstr - locate a substring
 * @haystack:string
 * @needle:string
 * Return:string
 */
char *_strstr(char *haystack, char *needle)
{
	char *rt;

	rt = strstr(haystack, needle);

	return (rt);
	return ('\0');
}
