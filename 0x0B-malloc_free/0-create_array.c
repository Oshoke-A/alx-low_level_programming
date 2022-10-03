#include "main.h"

/**
 * create_array - creates an array
 * allocates a size and initializes
 * the array
 *
 * @size: size of the array
 * @c: character
 *
 * Return: pointer to array on success
 * NULL on failure
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);

	p = malloc(size * sizeof(c));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
