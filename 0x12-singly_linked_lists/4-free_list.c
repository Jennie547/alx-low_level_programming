#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 */

void free_list(list_t *head)
{
	list_t *link;

	while (head)
	{
		link = head;
		head = head->next;
		free(link->str);
		free(link);
	}
}
