#include "lists.h"

/**
 * sum_listint - sums up all the data in a linked list
 * @head: head of the list
 * Return:(sum) sum of the number
 */
int sum_listint(listint_t *head)
{
	listint_t *index = head;
	size_t sum = 0;

	while (index != NULL)
	{
		sum += index->n;
		index = index->next;
	}
	return (sum);
}
