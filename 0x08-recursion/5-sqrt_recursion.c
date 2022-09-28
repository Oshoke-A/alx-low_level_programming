#include "main.h"

/**
 * root - finds natural square root
 * of a number
 * @n: the number
 * @x: the iterator
 * Return: square root
 */
int root(int n, int x)
{
	if (x % (n / x) == 0)
	{
		if (x * (n / x) == n)
			return (x);
		else
			return (-1);
	}
	return (0 + root(n, x + 1));
}

/**
 * _sqrt_recursion - finds square root
 * @n: the number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (root(n, 2));
}
