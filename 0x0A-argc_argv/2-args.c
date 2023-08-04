#include <stdio.h>
#include "main.h"

/**
 * main - prints all received argumants
 * @argc: how many arguments passed
 * @argv: array arguments
 *
 * Return: void
 */

int main(int argc, char *argv[])

{

	int i;


	for (i = 0; i < argc; i++)

	{

		printf("%s\n", argv[i]);

	}


	return (0);

}
