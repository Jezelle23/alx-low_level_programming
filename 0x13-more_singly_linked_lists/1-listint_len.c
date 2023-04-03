#include "lists.h"

/**
 * listint_len - number of nodes in a linked list.
 * @h: head of the list
 * Return:(num1) the number of elements
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t num1 = 0;

	while (cursor != NULL)
	{
		num1 += 1;
		cursor = cursor->next;
	}
	return (num1);
}
