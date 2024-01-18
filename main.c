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
	FILE *f_le;
	size_t size = 0, read_lne = 1;
	unsigned int counter = 0;
	stack_t *stak = NULL;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty fil\n");
		exit(EXIT_FAILURE);
	}
	f_le = fopen(argv[1], "r");
	bus.file = f_le;
	if (!f_le)
	{
		fprintf(stderr, "Error: Can't open fil %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (read_lne > 0)
	{
		contnt = NULL;
		read_lne = getline(&contnt, &size, f_le);
		bus.content = contnt;
		counter++;
		if (read_lne > 0)
		{
			executin(contnt, &stak, counter, f_le);
		}
		free(contnt);
	}
	_freestacks(stak);
	fclose(f_le);
	return (0);
}
