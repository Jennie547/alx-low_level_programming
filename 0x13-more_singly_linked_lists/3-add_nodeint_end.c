#include "lists.h"

/**
 * add_nodeint_end - allows for new end node
 * @head: pointer
 * @n: new node element data
 *
 * Return: NULL if failure or new node ptr
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nodeAnew;
	listint_t *ptr_tem_value = *head;

	nodeAnew = malloc(sizeof(listint_t));
	if (!nodeAnew)
	{
		return (NULL);
	}

	nodeAnew->n = n;
	nodeAnew->next = NULL;

	if (*head == NULL)
	{
		*head = nodeAnew;
		return (nodeAnew);
	}

	while (ptr_tem_value->next)
		ptr_tem_value = ptr_tem_value->next;

	ptr_tem_value->next = nodeAnew;

	return (nodeAnew);
}
