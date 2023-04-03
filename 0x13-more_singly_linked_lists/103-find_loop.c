#include "lists.h"

/**
 * find_listint_loop - fnd a loop in a list
 * @head: points to beginning of list
 * Return:(varB) the address where loop starts or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *varA, *varB;

	if (!head)
		return (NULL);
	varA = head;
	varB = head;
	while (varB->next && varB->next->next)
	{
		varB = varB->next->next;
		varA = varA->next;
		if (varB == varA)
		{
			varA = head;
			while (varA != varB)
			{
				varA = varA->next;
				varB = varB->next;
			}
			return (varB);
		}
	}
	return (NULL);
}
