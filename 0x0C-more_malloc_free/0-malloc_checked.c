#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocates memory
 * using malloc
 *
 * @b: size of needed memory
 *
 * Return: 98 on error, pointer to
 * allocated address on success
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = malloc(b);

	if (p == NULL)
		exit(98); 

	return (p);
}
