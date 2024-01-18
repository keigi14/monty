#include "monty.h"
/**
 *mi_rotr- rotates de stack to de bottom
 *@hd: stacks head
 *@counter: line_nuber
 *Return: not return
 */

void mi_rotr(stack_t **hd, __attribute__((unused)) unsigned int counter)
{
	stack_t *cpy;

	cpy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (cpy->next)
	{
		cpy = cpy->next;
	}
	cpy->next = *hd;
	cpy->prev->next = NULL;
	cpy->prev = NULL;
	(*hd)->prev = cpy;
	(*hd) = cpy;
}
