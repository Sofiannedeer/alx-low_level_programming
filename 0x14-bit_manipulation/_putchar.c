#include <unistd.h>

/**
 * _putchar - Write char c to stdout
 * @c: Char to print
 *
 * Return: On success 1.
 * On error, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
