#include "main.h"
#include <stdlib.h>
/**
 * clear_bit - Set value of a bit to 0
 * @n: Num of parameter
 * @index: Index
 * Return: 1 if works, -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
