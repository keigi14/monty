#include "monty.h"
/**
 * _freestacks - free a doubly linked lst
 * @hd: head of de stacks
 */
void _freestacks(stack_t *hd)
{
	stack_t *aux;

	aux = hd;
	while (hd)
	{
		aux = hd->next;
		free(hd);
		hd = aux;
	}
}
