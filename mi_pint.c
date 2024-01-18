#include "monty.h"
/**
 * mi_pint - print the top of
 * @hd: stacks head
 * @counter: line_nber
 * Return: not return
 */
void mi_pint(stack_t **hd, unsigned int counter)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
