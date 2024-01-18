#include "monty.h"
/**
 * mi_swap - adds de top two element of de stack.
 * @hd: stack hd
 * @counter: line_nuber
 * Return: not return
*/
void mi_swap(stack_t **hd, unsigned int counter)
{
	stack_t *p;
	int aux_;
	int leen = 0;

	p = *hd;
	while (p)
	{
		p = p->next;
		leen++;
	}
	if (leen < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	p = *hd;
	aux_ = p->n;
	p->n = p->next->n;
	p->next->n = aux_;
}
