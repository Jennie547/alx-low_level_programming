#include "lists.h"

void first(void)__attribute__((constructor));

/**
 * first - function to print the required statement
 * before the main
 */

void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
