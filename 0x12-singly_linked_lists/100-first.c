#include "lists.h"

void func(void) __attribute__ ((constructor));

/**
 * func -  a function that prints a sentence  before the main function
 *	is executed.
 */

void func(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
