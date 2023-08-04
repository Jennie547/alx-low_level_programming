#include <stdio.h>
#include "main.h"


/**
 * main - prints how many arguments that are passed to the program
 * @argc: how many arguments passed
 * @argv: arguments array
 *
 * Return: void
 */

int main(int argc, char *argv[])

{

	(void) argv; /*Ignore argv*/

	printf("%d\n", argc - 1);


	return (0);

}
