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
	int aux;
	int len = 0;

	q = *hd;
	while (q)
	{
		q = q->next;
		len++;
	}
	if (len < 2)
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
	aux = q->next->n / q->n;
	q->next->n = aux;
	*hd = q->next;
	free(q);
}
