#include <stdio.h>

/**
 * first - Func executed before main
 * Return: No return.
 */

void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
