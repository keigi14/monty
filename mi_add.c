#include "monty.h"
/**
 * mi_add - adds the top two elemnt of the stack.
 * @hd: stackz head
 * @counter: line_nubr
 * Return: nothin return
 */
void mi_add(stack_t **hd, unsigned int counter)
{
	stack_t *w;
	int lenh = 0;
	int aux_;

	w = *hd;
	while (w)
	{
		w = w->next;
		lenh++;
	}
	if (lenh < 2)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	w = *hd;
	aux_ = w->n + w->next->n;
	w->next->n = aux_;
	*hd = w->next;
	free(w);
}
