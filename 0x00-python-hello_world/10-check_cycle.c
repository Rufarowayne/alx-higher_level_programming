#include "lists.h"

/**
* check_cycle - checks if a linked list contains a cycle
 * @head: pointer to the head of the linked list to check
 *
 * Return: 1 if the list has a cycle, 0 if it doesn't
 */
int check_cycle(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;

	while (fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;

		if (slow == fast)
		{

			/* The list contains a cycle */
			return (1);
		}
	}

	/* The list does not contain a cycle */
	return (0);
}
