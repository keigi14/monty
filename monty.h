#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <ctype.h>
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;
/**
 * struct buz_x - variables -args, file, line contet
 * @arg: value
 * @file: pointer to monty filez
 * @content: line content
 * @lifi: flag changes stack <-> queue
 * Description: carry values through the program
 */
typedef struct buz_x
{
	char *arg;
	FILE *file;
	char *content;
	int lifi;
}  buz_t;
extern buz_t bus;
/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;
char *_realloc(char *ptr, unsigned int old_size, unsigned int new_size);
ssize_t getstdin(char **lineptr, int file);
char  *clean_line(char *content);
void mi_push(stack_t**hd, unsigned int number);
void mi_pall(stack_t **hd, unsigned int number);
void mi_pint(stack_t **hd, unsigned int number);
int executin(char *content, stack_t **hd, unsigned int counter, FILE *file);
void _freestacks(stack_t *hd);
void mi_pop(stack_t **hd, unsigned int counter);
void mi_swap(stack_t **hd, unsigned int counter);
void mi_add(stack_t **hd, unsigned int counter);
void mi_nop(stack_t **hd, unsigned int counter);
void mi_sub(stack_t **hd, unsigned int counter);
void mi_div(stack_t **hd, unsigned int counter);
void mi_mul(stack_t **hd, unsigned int counter);
void mi_mod(stack_t **hd, unsigned int counter);
void mi_pchar(stack_t **hd, unsigned int counter);
void mi_pstr(stack_t **hd, unsigned int counter);
void mi_rotl(stack_t **hd, unsigned int counter);
void mi_rotr(stack_t **hd, __attribute__((unused)) unsigned int counter);
void _add_node(stack_t **hd, int n);
void _add_queue(stack_t **hd, int n);
void mi_queue(stack_t **hd, unsigned int counter);
void mi_stack(stack_t **hd, unsigned int counter);
#endif
