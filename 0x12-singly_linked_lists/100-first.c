#include <stdio.h>

/* contructor in C */
void _main(void) __attribute__((constructor));
/**
 * _main - my main constructor than runs before main function
*/
void _main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
