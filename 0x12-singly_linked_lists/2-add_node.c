#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: pointer to a pointer to the beginning of the list
 * @str: string to add to the list
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr_two;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr_two = malloc(sizeof(list_t));
	if (!ptr_two)
		return (NULL);

	ptr_two->str = strdup(str);
	ptr_two->len = len;
	ptr_two->next = (*head);
	(*head) = ptr_two;

	return (*head);
}
