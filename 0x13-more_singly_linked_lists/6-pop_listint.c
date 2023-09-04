#include "lists.h"

/**
 * pop_listint - deletes listint_t head node
 * @head: pointer
 *
 * Return: 0 if ptr == NULL or the contents before deletion
 */

int pop_listint(listint_t **head)
{
	int my_data;
	listint_t *tem_value;

	if (*head == NULL)
	{
		return (0);
	}

	my_data = (*head)->n;
	tem_value = (*head)->next;
	free(*head);
	*head = tem_value;

	return (my_data);
}
