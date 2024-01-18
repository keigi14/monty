#include "monty.h"
/**
 * _freestacks - free a doubly linked lst
 * @hd: head of de stacks
 */
void _freestacks(stack_t *hd)
{
	stack_t *aux_;

	aux_ = hd;
	while (hd)
	{
		aux_ = hd->next;
		free(hd);
		hd = aux_;
	}
}
