#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates two strings
 * with the condition of n bytes
 *
 * @dest: the destination string
 * @src: the source string
 * @n: no of bytes
 *
 * Return: destination string
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
