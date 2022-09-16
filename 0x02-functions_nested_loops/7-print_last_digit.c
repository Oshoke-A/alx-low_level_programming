#include "main.h"

/**
 *print_last_digit - find and prints
 *the last digit of a number
 *@n: the number
 *
 *Return: the last didgit
 */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	return (lastDigit);
}
