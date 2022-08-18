#include "monty.h"

/**
 *_pint - prints the value at top of stack, followed by newline
 * @stack: double pointer at head of stack
 * @line_number: line number of the file we process on
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	stack_t *head = *stack;

	if (stack == 0)
	{
		fprintf(stderr, "L%d: can't print, stack empty\n", line_number);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", head->n);
}
