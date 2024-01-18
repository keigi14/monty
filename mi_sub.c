#include "monty.h"

/**
 *mi_sub- sustration
 *@hd: stacks head
 *@counter: line_nuber
 *Return: not return
 */

void mi_sub(stack_t **hd, unsigned int counter)
{
	stack_t *aux_;
	int nodes;
	int sos;

	aux_ = *hd;
	for (nodes = 0; aux_ != NULL; nodes++)
		aux_ = aux_->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	aux_ = *hd;
	sos = aux_->next->n - aux_->n;
	aux_->next->n = sos;
	*hd = aux_->next;
	free(aux_);
}
