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
	int sus;
	int nodes;

	aux = *hd;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	aux = *hd;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*hd = aux->next;
	free(aux);
}
