#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of bytes
 *
 * Return: destination string
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
