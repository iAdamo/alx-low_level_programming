#include "dog.h"
/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: pointer to struct data from outside the function
 * @name: first pointer variable to string
 * @age: second variable to a float number
 * @owner: third pointer variable to string
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	d->owner = owner;
}
