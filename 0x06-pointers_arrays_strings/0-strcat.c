#include "main.h"
#include <string.h>

/**
 * _strcat - concatenates two strings
 * @dest: the destination string
 * @src: the source string
 *
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
	strcat(dest, src);
	return (dest);
}
