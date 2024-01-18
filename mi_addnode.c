#include "monty.h"
/**
 * _add_node - adds node to de head stacks
 * @hd: head of the stacks
 * @n: new_value
 * Return: noyhin return
 */
void _add_node(stack_t **hd, int n)
{

	stack_t *newnode, *aux;

	aux = *hd;
	newnode = malloc(sizeof(stack_t));
	if (newnode == NULL)
	{ printf("Error\n");
		exit(0); }
	if (aux)
		aux->prev = newnode;
	newnode->n = n;
	newnode->next = *hd;
	newnode->prev = NULL;
	*hd = newnode;
}
