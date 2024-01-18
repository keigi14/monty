#include "monty.h"
/**
 * mi_mod - computes de rest of de divide of the 2nd
 * top element of stack by de top element of the stack
 * @hd: stack head
 * @counter: line_nuber
 * Return: nothin return
 */

void mi_mod(stack_t **hd, unsigned int counter)
{
	stack_t *p;
	int aux_;
	int lenh = 0;

	p = *hd;
	while (p)
	{
		p = p->next;
		lenh++;
	}
	if (lenh < 2)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	p = *hd;
	if (p->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	aux_ = p->next->n % p->n;
	p->next->n = aux_;
	*hd = p->next;
	free(p);
}
