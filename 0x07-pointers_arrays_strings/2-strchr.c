#include "main.h"

/**
 * _strchr - searches a string
 * for first occurence of a char
 *
 * @s: the string
 * @c: the character
 * Return: the first occurence
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
	
		if (*(s + i) == c)
		
			return (s + i);
	if (*(s + i) == c)
		return (s + i);		

	return ('\0');
}
