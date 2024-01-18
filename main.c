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
	FILE *file;
	size_t size = 0;
	ssize_t read_line = 1;
	unsigned int counter = 0;
	stack_t *stack = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}
	file = fopen(argv[1], "r");
	bus.file = file;
	if (!file)
	{
		fprintf(stderr, "Error: Can't open fil %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_line > 0)
	{
		contnt = NULL;
		read_line = getline(&contnt, &size, file);
		bus.content = contnt;
		counter++;
		if (read_line > 0)
		{
			executin(contnt, &stack, counter, file);
		}
		free(contnt);
	}
	_freestacks(stack);
	fclose(file);
	return (0);
}
