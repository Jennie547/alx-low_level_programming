#include "lists.h"

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */

void free_listint2(listint_t **head)
{
	listint_t *my_var;

	if (head == NULL)
		return;

	while (*head)
	{
		my_var = (*head)->next;
		free(*head);
		*head = my_var;
	}

	*head = NULL;
}
