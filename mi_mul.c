#include "monty.h"
/**
 * mi_mul - multiplies the top two elements of the stack
 * @hd: stack head
 * @counter: line_number.
 * Return: nothin return
 */

void mi_mul(stack_t **hd, unsigned int counter)
{
	stack_t *p;
	int lenh = 0;
	int aux_;

	p = *hd;
	while (p)
	{
		p = p->next;
		lenh++;
	}
	if (lenh < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	p = *hd;
	aux_ = p->next->n * p->n;
	p->next->n = aux_;
	*hd = p->next;
	free(p);
}
