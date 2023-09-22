#include "monty.h"
/**
 * fn_pstr - print str start stack
 * @head: head
 * @counter: line_number
 */
void fn_pstr(stack_t **head, unsigned int counter)
{
	stack_t *hd;
	(void)counter;

	hd = *head;
	while (hd)
	{
		if (hd->n > 127 || hd->n <= 0)
			break;
		printf("%c", hd->n);
		hd = hd->next;
	}
	printf("\n");
}
