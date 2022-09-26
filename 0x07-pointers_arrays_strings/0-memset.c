#include "main.h"

/**
 * _memset - copies n bytes of a char
 * b to s
 * @s: the string
 * @b: the single byte chara
 * @n: the no of bytes to copy
 *
 * Return: s
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
