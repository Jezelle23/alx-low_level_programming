#include "lists.h"

/**
 *pop_listint - deletes the head node of a linked list
 *@head: head of the list
 *Return: (data) success
 */

int pop_listint(listint_t **head)
{
	listint_t *nodedata;
	int data1;

	if (*head == NULL)
		return (0);

	nodedata = *head;
	data1 = nodedata->n;
	free(nodedata);

	*head = (*head)->next;
	return (data1);
}
