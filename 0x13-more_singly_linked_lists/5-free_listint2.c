#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *Return: (void) Success
 */

void free_listint2(listint_t **head)
{
	listint_t *temp1;

	if (head == NULL)
		return;

	while (*head)
	{
		temp1 = (*head)->next;
		free(*head);
		*head = temp1;
	}

	*head = NULL;
}
