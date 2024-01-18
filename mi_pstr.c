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
	stack_t *o;
	(void)counter;

	o = *hd;
	while (o)
	{
		if (o->n > 127 || o->n <= 0)
		{
			break;
		}
		printf("%c", o->n);
		o = o->next;
	}
	printf("\n");
}
