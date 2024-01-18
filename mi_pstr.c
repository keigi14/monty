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
	stack_t *p;
	(void)counter;

	p = *hd;
	while (p)
	{
		if (p->n > 127 || p->n <= 0)
		{
			break;
		}
		printf("%c", p->n);
		p = p->next;
	}
	printf("\n");
}
