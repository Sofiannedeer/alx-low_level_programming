#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - to free memory allocated for a struct dog
 * @d: struct to free dog
 */
void free_dog(dog_t *d)
{
	if (d)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
