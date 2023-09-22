#include"monty.h"
/**
 * addqueue - add node to tail stack
 * @n: new val
 * @head: head
 */
void addqueue(stack_t **head, int n)
{
	stack_t *n_node, *auxi;

	auxi = *head;

	n_node = malloc(sizeof(stack_t));
	if (n_node == NULL)
	{
		printf("Error\n");
	}
	n_node->n = n;
	n_node->next = NULL;
	if (auxi)
	{
		while (auxi->next)
			auxi = auxi->next;
	}
	if (!auxi)
	{
		*head = n_node;
		n_node->prev = NULL;
	}
	else
	{
		auxi->next = n_node;
		n_node->prev = auxi;
	}
}
