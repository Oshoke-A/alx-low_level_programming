#include "main.h"

/**
 * _strstr - finds a string in a
 * string
 * @haystack: the source string
 * @needle: the substring
 *
 * Return: null on fail, the
 * substring on success
 */

char *_strstr(char *haystack, char *needle)
{
	char *first, *compare;

	while (*haystack)
	{
		first = haystack;
		compare = needle;
		while (*haystack && *compare && *haystack == *compare)
		{
			haystack++;
			compare++;
		}
		if (!*compare)
		{
			return (first);
		}
		else
		{
			haystack = first + 1;
		}
	}
	return (NULL);
}
