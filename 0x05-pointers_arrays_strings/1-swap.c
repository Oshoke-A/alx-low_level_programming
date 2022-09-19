#include "main.h"

/**
 * swap_int - swaps the values of two
 * parameters passed to the func
 *
 * @a: first parameter
 * @b: second parameter
 *
 * Return: no return value
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
