#include "main.h"
#include <string.h>

/**
 * _strdup - returns a copy of
 * string given as parameter
 *
 * @str: string
 *
 * Return: NULL on failure
 * copy of string on success
 */

char *_strdup(char *str)
{
	int i;
	char *tempstr;

	if (str == NULL)
		return (NULL);

	tempstr = malloc(sizeof(char) * strlen(str));

	if (tempstr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		tempstr[i] = str[i];

	return (tempstr);
	free(tempstr);
}
