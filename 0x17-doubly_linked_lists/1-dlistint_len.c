#include "lists.h"

/**
 * dlistint_len - The function returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes in  doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
