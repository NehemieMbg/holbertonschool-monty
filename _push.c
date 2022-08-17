#include "monty.h"

/**
 *_push - push an integer onto the stack
 *@stack: double pointer to head of stack
 *@line_number: line number of file we are processing
 *
 */

void _push(stack_t **stack, unsigned int line_number)
{
	int data;
	char *arg;

	arg = strtok(NULL, " ");
	if (arg == NULL)
	{
		fprintf(stderr, "L%u: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	data = atoi(arg);
	if (add_node(stack, data) == NULL)
	{
		fprintf(stderr, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
}
