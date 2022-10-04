#include "main.h"
#include <string.h>

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: main string
 * @s2: sub string
 *
 * Return: NULL on failure
 * s1 on success
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len1, len2;
	char *s;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	for (i = 0; i < len1; i++)
		s[i] = s1[i];

	for (j = 0; j < (len2 + 1); j++, i++)
		s[i] = s2[j];
	return (s);

}
