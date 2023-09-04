#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t
 * @head: pointer to the list_t
 * @str: string
 *
 * Return: address of the new element, or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr_two;
	list_t *ptr_tem = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	ptr_two = malloc(sizeof(list_t));
	if (!ptr_two)
		return (NULL);

	ptr_two->str = strdup(str);
	ptr_two->len = len;
	ptr_two->next = NULL;

	if (*head == NULL)
	{
		*head = ptr_two;
		return (ptr_two);
	}

	while (ptr_tem->next)
		ptr_tem = ptr_tem->next;

	ptr_tem->next = ptr_two;

	return (ptr_two);
}
