#include "monty.h"

/**
 *mi_sub- sustration
 *@hd: stacks head
 *@counter: line_nuber
 *Return: not return
 */

void mi_sub(stack_t **hd, unsigned int counter)
{
	stack_t *aux;
	int sos;
	int nde;

	aux = *hd;
	for (nde = 0; aux != NULL; nde++)
		aux = aux->next;
	if (nde < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	aux = *hd;
	sos = aux->next->n - aux->n;
	aux->next->n = sos;
	*hd = aux->next;
	free(aux);
}
