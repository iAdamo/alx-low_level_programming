#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - i5nitialize variable of type struct dog
  * @d: pointer variable
  * @name: dog name
  * @age: dog age
  * @owner: dog owner
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d = malloc(sizeof(struct dog));
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
