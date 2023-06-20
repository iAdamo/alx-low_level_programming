#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - struct to hold dog infos
 * @name: name of the dog
 * @age: age of the dog
 * @owner: the dog's owner
*/
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - typedef to struct dog
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
