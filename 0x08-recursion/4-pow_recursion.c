#include "main.h"

/**
 * _pow_recursion - finds the value
 * of a number raised to another num
 * @x: base number
 * @y: exponent
 * Return: exponent of base num
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
