#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *Return: (num) success
 */

int pop_listint(listint_t **head)
{
	listint_t *var123;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	var123 = (*head)->next;
	free(*head);
	*head = var123;

	return (num);
}
