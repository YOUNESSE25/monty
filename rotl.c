#include"monty.h"
/**
 * fn_rotl - rotates stack to top
 * @head: head
 * @counter: line_number
 */
void fn_rotl(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *t = *head, *auxi;

	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	auxi = (*head)->next;
	auxi->prev = NULL;
	while (t->next != NULL)
	{
		t = t->next;
	}
	t->next = *head;
	(*head)->next = NULL;
	(*head)->prev = t;
	(*head) = auxi;
}
