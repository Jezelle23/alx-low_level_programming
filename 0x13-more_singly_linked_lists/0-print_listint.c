#include "lists.h"
#include<stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: pointer to the list.
 * Return:(num) number of nodes.
 **/
size_t print_listint(const listint_t *h)
{
	const listint_t *index = h;
	size_t num = 0;

	while (index != NULL)
	{
		printf("%d\n", index->n);
		num += 1;
		index = index->next;
	}
	return (num);
}
