#include "lists.h"

/**
 * add_nodeint - allows for a new node
 * @n: node data
 * @head: pointer
 *
 * Return: NULL when failure occurs or new node ptr
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *my_ptr;

	my_ptr = malloc(sizeof(listint_t));
	if (!my_ptr)
	{
		return (NULL);
	}
	my_ptr->n = n;
	my_ptr->next = *head;
	*head = my_ptr;

	return (my_ptr);
}
