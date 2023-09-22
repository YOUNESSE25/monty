#include"monty.h"
/**
 * fn_sub - sustraction
 * @head: head
 * @counter: line_number
 */
void fn_sub(stack_t **head, unsigned int counter)
{
	stack_t *auxi;
	int s, n;

	auxi = *head;
	for (n = 0; auxi != NULL; n++)
		auxi = auxi->next;
	if (n < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	auxi = *head;
	s = auxi->next->n - auxi->n;
	auxi->next->n = s;
	*head = auxi->next;
	free(auxi);
}
