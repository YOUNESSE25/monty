#include"monty.h"
/**
 * free_stack - dable linked list free
 * @head: head
 */
void free_stack(stack_t *head)
{
	stack_t *auxi;

	auxi = head;
	while (head)
	{
		auxi = head->next;
		free(head);
		head = auxi;
	}
}
