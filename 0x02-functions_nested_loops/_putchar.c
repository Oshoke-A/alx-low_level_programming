#include <unistd.h>

/**
 * _putchar- writes to stdout
 * @c: char to write to stdout
 *
 * Return: 1 on success.
 * On error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
