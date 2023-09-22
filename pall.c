#include "monty.h"
/**
 * fn_pall - print the stack
 * @head: head
 * @counter: ...
 * @Return: ...
 */
void fn_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
