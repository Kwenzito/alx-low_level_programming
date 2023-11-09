#include "lists.h"

/**
 * get_dnodeint_at_index - The functions returns the nth node
 * of a dlistint_t linked list.
 * @head: points to head node of the list
 * @index: index of the nth node, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == size)
	return (tmp);
	size++;
	tmp = tmp->next;
	}
	return (NULL);
}
