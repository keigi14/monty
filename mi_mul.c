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
	int len = 0;
	int aux;

	p = *hd;
	while (p)
	{
		p = p->next;
		len++;
	}
	if (len < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	p = *hd;
	aux = p->next->n * p->n;
	p->next->n = aux;
	*hd = p->next;
	free(p);
}
