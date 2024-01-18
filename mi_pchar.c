#include "monty.h"

/**
 * mi_pchar - prints de char at de top of the stack,
 * followed by de new lines
 * @hd: stacks head
 * @counter: line_number
 * Return: not return
 */
void mi_pchar(stack_t **hd, unsigned int counter)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
