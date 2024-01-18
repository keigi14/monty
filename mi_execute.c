#include "monty.h"
/**
 * executin - executes the opcode
 * @stack: head linked list - stacks
 * @counter: lin_counter
 * @file: poiner to monty file
 * @content: line on cotents
 * Return: nothin return
 */

int executin(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	instruction_t opst[] = {
		{"push", mi_push}, {"pall", mi_pall}, {"pint", mi_pint},
		{"pop", mi_pop},
		{"swap", mi_swap},
		{"add", mi_add},
		{"nop", mi_nop},
		{"sub", mi_sub},
		{"div", mi_div},
		{"mul", mi_mul},
		{"mod", mi_mod},
		{"pchar", mi_pchar},
		{"pstr", mi_pstr},
		{"rotl", mi_rotl},
		{"rotr", mi_rotr},
		{"queue", mi_queue},
		{"stack", mi_stack},
		{NULL, NULL}
	};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, " \n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{	opst[i].f(stack, counter);
			return (0);
		}
		i++;
	}
	if (op && opst[i].opcode == NULL)
	{ fprintf(stderr, "L%d: unknown instruction %s\n", counter, op);
		fclose(file);
		free(content);
		_freestacks(*stack);
		exit(EXIT_FAILURE); }
	return (1);
}
