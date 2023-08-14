#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints smallest number possible
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 if success, 1 if erroneous
 */

int main(int argc, char *argv[])
{
	int num, jar, result;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (jar = 0; jar < 5 && num >= 0; jar++)
	{
		while (num >= coins[jar])
		{
			result++;
			num -= coins[jar];
		}
	}
	printf("%d\n", result);
	return (0);

}
