#include "main.h"

/**
 * _strpbrk - searches for a char 
 * occurence in 's'
 * @s: the string to be searched
 * @accept: accepted char to check
 *
 * Return: first occurence on success
 * void on fail
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s[i]);
			}
		}
	}
	return ('\0');
}
