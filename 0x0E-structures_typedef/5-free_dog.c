#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * free_dog - free memory allocated to struct dog
  * @d: struct dog to free
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
