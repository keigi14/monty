#define _GNU_SOURCE
#include "monty.h"

buz_t bus = {NULL, NULL, NULL, 0};
/**
 * main - monty code interpreter
 * @argc: nber of arguments
 * @argv: monty file location
 * Return: 0 only on success
 */
int main(int argc, char *argv[])
{
	char *contnt;
	FILE *fle;
	size_t size = 0;
	ssize_t _readline = 1;
	unsigned int counter = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}
	fle = fopen(argv[1], "r");
	bus.file = fle;
	if (!fle)
	{
		fprintf(stderr, "Error: Can't open fil %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (_readline > 0)
	{
		contnt = NULL;
		_readline = getline(&contnt, &size, fle);
		bus.content = contnt;
		counter++;
		if (_readline > 0)
		{
			executin(contnt, &stack, counter, fle);
		}
		free(contnt);
	}
	_freestacks(stack);
	fclose(fle);
	return (0);
}
