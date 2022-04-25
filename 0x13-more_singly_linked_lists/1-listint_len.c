#include "list.h"
#include <stdio.h>

/**
 * listint_len - Returns the number of elememts
 *		in a linked listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The number of elememts in the listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}