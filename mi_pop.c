#include "monty.h"
/**
 * mi_pop - print de top.
 * @hd: stacks head
 * @counter: line_number
 * Return: not return
 */
void mi_pop(stack_t **hd, unsigned int counter)
{
	stack_t *v;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	v = *hd;
	*hd = v->next;
	free(v);
}
