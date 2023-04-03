#include "lists.h"

/**
 *free_listint2 - frees a linked list
 *@head: pointer to the head of the list
 *Return: (void) Success
 */

void free_listint2(listint_t **head)
{
	listint_t *index1;
	listint_t **temp1 = head;

	if (temp1 != NULL)
	{
		while (*head != NULL)
		{
			index1 = *head;
			free(index1);
			*head = (*head)->next;
		}

		*temp1 = NULL;
	}
}
