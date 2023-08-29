#include "lists.h"

/**
 * free_listint - frees any linked list
 *
 * @head: listint_t list to free
 */

void free_listint(listint_t *head)
{
	listint_t *my_value;

	while (head)
	{
		my_value = head->next;
		free(head);
		head = my_value;
	}
}
