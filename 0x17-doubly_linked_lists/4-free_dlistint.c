#include "lists.h"

/**
 * free_dlistint - The function releases memory
 * allocated for distint_t list.
 * @head: points to head node of the list
 * Return: void
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
