#include "monty.h"
/**
 * fn_mod - rest div second
 * @head: head
 * @counter: line_number
 */
void fn_mod(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int l = 0, auxi;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = h->next->n % h->n;
	h->next->n = auxi;
	*head = h->next;
	free(h);
}
