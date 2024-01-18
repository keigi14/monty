#include "monty.h"
/**
 * mi_queue - print the tops
 * @hd: stacks head
 * @counter: line_nuber
 * Return: not return
 */

void mi_queue(stack_t **hd, unsigned int counter)
{
	(void)hd;
	(void)counter;
	bus.lifi = 1;
}

/**
 * _add_queue - add node to de tail stack
 * @n: new value
 * @hd: head of de stack
 * Return: not return
 */
void _add_queue(stack_t **hd, int n)
{
	stack_t *newnode, *aux;

	aux = *hd;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{
		printf("Error\n");
	}
	newnode->n = n;
	newnode->next = NULL;
	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}
	if (!aux)
	{
		*hd = newnode;
		newnode->prev = NULL;
	}
	else
	{
		aux->next = newnode;
		newnode->prev = aux;
	}
}
