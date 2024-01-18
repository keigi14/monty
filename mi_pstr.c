#include "monty.h"
/**
 * mi_pstr - prints the string starting at the top of the stack,
 * followed by a new
 * @hd: stacks head
 * @counter: line_nuber
 * Return: not return
 */
void mi_pstr(stack_t **hd, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}
		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
