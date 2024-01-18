#include "monty.h"
/**
 *mi_rotr- rotates de stack to de bottom
 *@hd: stacks head
 *@counter: line_nuber
 *Return: not return
 */

void mi_rotr(stack_t **hd, __attribute__((unused)) unsigned int counter)
{
	stack_t *copy;

	copy = *hd;
	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *hd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*hd)->prev = copy;
	(*hd) = copy;
}
