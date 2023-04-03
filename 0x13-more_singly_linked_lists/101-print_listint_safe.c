#include "lists.h"
/**
 * print_listint_safe - prints a linked list with a loop.
 * @head: pointer to the 1st node of the linked list
 * Return: (count) Success
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp = NULL;
	const listint_t *num = NULL;
	size_t count = 0;
	size_t new_num;

	temp = head;
	while (temp)
	{
		printf("[%p] %d\n", (void *)temp, temp->n);
		count++;
		temp = temp->next;
		num = head;
		new_num = 0;
		while (new_num < count)
		{
			if (temp == num)
			{
				printf("-> [%p] %d\n", (void *)temp, temp->n);
				return (count);
			}
			num = num->next;
			new_num++;
		}
		if (!head)
			exit(98);
	}
	return (count);
}
