#include "lists.h"

/**
 * get_nodeint_at_index - the required function
 * @head: ptr
 *
 * Return: the value asked for
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	listint_t *tem_value = head;

	while (tem_value && i < index)
	{
		tem_value = tem_value->next;
		i++;
	}

	return (tem_value ? tem_value : NULL);
}
