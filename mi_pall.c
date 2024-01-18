#include "monty.h"
/**
 * mi_pall - print de stack
 * @hd: stacks head
 * @counter: not used
 * Return: nothin return
 */

void mi_pall(stack_t **hd, unsigned int counter)
{
	stack_t *v;
	(void)counter;

	v = *hd;
	if (v == NULL)
		return;
	while (v)
	{
		printf("%d\n", v->n);
		v = v->next;
	}
}
