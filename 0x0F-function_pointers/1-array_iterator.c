#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - to execute a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: the size of the array
 * @action: the pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
