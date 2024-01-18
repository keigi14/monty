#include "monty.h"
/**
 *mi_rotl- rotate de stack to the top
 *@hd: stacks head,
 *@counter: line_nuber
 *Return: not return
 */

void mi_rotl(stack_t **hd,  __attribute__((unused)) unsigned int counter)
{
	stack_t *tmp = *hd, *aux;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	aux = (*hd)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tmp;
	(*hd) = aux;
}
