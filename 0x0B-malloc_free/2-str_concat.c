#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: first input
 * @s2: second input
 * Return: concat of s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *cont;
	int iter, rt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	iter = rt = 0;
	while (s1[iter] != '\0')
		iter++;
	while (s2[rt] != '\0')
		rt++;
	cont = malloc(sizeof(char) * (iter + rt + 1));

	if (cont == NULL)
		return (NULL);
	iter = rt = 0;
	while (s1[iter] != '\0')
	{
		cont[iter] = s1[iter];
		iter++;
	}

	while (s2[rt] != '\0')
	{
		cont[iter] = s2[rt];
		iter++, rt++;
	}
	cont[iter] = '\0';
	return (cont);
}
