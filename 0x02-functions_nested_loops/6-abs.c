#include "main.h"

/**
 *_abs - returns the absolute value of a number
 *@n: the int to be checked
 *
 *
 *Return: the absolute value. Always success
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
