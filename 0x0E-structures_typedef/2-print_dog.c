#include "dog.h"
/**
 * print_dog - function that prints a struct dog
 * @d: pointer variable for struct dog
*/
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		putchar('\0');
		return;
	}
	if (d->name == NULL)
	{
		puts("(nil)");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	printf("Age: %f\n", d->age);
	if (d->owner == NULL)
	{
		puts("(nil)");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
