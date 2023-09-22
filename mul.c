#include"monty.h"
/**
 * fn_mul - mul top 2 element
 * @head: head
 * @counter: line_number
 */
void fn_mul(stack_t **head, unsigned int counter)
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
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	auxi = h->next->n * h->n;
	h->next->n = auxi;
	*head = h->next;
	free(h);
}
