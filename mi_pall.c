#include "monty.h"
/**
 * mi_pall - print de stack
 * @hd: stacks head
 * @counter: not used
 * Return: nothin return
 */

void mi_pall(stack_t **hd, unsigned int counter)
{
	stack_t *p;
	(void)counter;

	p = *hd;
	if (p == NULL)
		return;
	while (p)
	{
		printf("%d\n", p->n);
		p = p->next;
	}
}
