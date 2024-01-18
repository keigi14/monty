#include "monty.h"
/**
 * mi_push - add node to de stack
 * @hd: stacks head
 * @counter: line_nuber
 * Return: not return
 */
void mi_push(stack_t **hd, unsigned int counter)
{
	int v;
	int j = 0;
	int flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 || bus.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(bus.file);
			free(bus.content);
			_freestacks(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(bus.file);
		free(bus.content);
		_freestacks(*hd);
		exit(EXIT_FAILURE); }
	v = atoi(bus.arg);
	if (bus.lifi == 0)
		_add_node(hd, v);
	else
		_add_queue(hd, v);
}
