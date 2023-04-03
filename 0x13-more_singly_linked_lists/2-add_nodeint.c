#include "lists.h"

/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: pointer to the head of the list
 * @n: integer to be used 
 * Return:(*head) address of new node added
 */
static listint_t *new_node(const int n);
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!(*head))
	{
		*head = new_node(n);
		return (*head);
	}

	new = new_node(n);
	new->next = *head;
	*head = new;
	return (*head);
}
static listint_t *new_node(const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	return (new);
}
