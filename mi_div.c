#include "monty.h"
/**
 * mi_div - divides the top two element of the stacks.
 * @hd: stack head
 * @counter: line_nuber
 * Return: nothin return
 */
void mi_div(stack_t **hd, unsigned int counter)
{
	stack_t *q;
	int aux_;
	int lent = 0;

	q = *hd;
	while (q)
	{
		q = q->next;
		lent++;
	}
	if (lent < 2)
	{
		fprintf(stderr, "L%d: can't div, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	q = *hd;
	if (q->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	aux_ = q->next->n / q->n;
	q->next->n = aux_;
	*hd = q->next;
	free(q);
}
