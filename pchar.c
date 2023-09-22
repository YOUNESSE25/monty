#include"monty.h"
/**
 * fn_pchar - prints char in top stack
 * @head: head
 * @counter: line_number
 */
void fn_pchar(stack_t **head, unsigned int counter)
{
	stack_t *H;

	H = *head;
	if (!H)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if (H->n > 127 || H->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", H->n);
}
