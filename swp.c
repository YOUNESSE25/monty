#include"monty.h"
/**
 * fn_swap - adds 2 top elem
 * @head: head
 * @counter: line_number
 */
void fn_swap(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxi = h->n;
	h->n = h->next->n;
	h->next->n = auxi;
}
