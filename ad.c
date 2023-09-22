#include "monty.h"
/**
 * fn_add - add 2 elem stack
 * @head: heade
 * @counter: line_number
 */
void fn_add(stack_t **head, unsigned int counter)
{
	stack_t *h;
	int l = 0, aux;

	h = *head;
	while (h)
	{
		h = h->next;
		l++;
	}
	if (l < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	h = *head;
	aux = h->n + h->next->n;
	h->next->n = aux;
	*head = h->next;
	free(h);
}
/**
 * addnode - addnode head stack
 * @head: head of the stack
 * @n: value
 */
void addnode(stack_t **head, int n)
{
	stack_t *n_node, *auxi;

	auxi = *head;
	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (auxi)
		auxi->prev = n_node;
	n_node->n = n;
	n_node->next = *head;
	n_node->prev = NULL;
	*head = n_node;
}
