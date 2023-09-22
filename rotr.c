#include "monty.h"
/**
 * fn_rotr - rotates stack to bottom
 * @head: head
 * @counter: line_number
 */
void fn_rotr(stack_t **head, __attribute__((unused)) unsigned int counter)
{
	stack_t *p;

	p = *head;
	if (*head == NULL || (*head)->next == NULL)
	{
		return;
	}
	while (p->next)
	{
		p = p->next;
	}
	p->next = *head;
	p->prev->next = NULL;
	p->prev = NULL;
	(*head)->prev = p;
	(*head) = p;
}
