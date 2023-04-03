#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: head of the list
 * Return: (void) Success
 */
void free_listint(listint_t *head)
{
	listint_t *tempo;

	while (head != NULL)
	{
		tempo = head;
		head = head->next;
		free(tempo);
	}
}
