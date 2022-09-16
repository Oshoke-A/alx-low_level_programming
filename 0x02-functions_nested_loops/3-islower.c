#include "main.h"
/**
 *_islower - checks if a char is lowercase
 *@c: the char to be checked
 *Return: 1 if lowercase otherwise return 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
