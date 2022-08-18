#include "monty.h"

/**
 * _add - Function that add the two last node of a linked list data
 * @stack: Double pointer to the head of stack
 * @line_number: line number of file we process
 */

void _add(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = malloc(sizeof(stack_t));

	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", line_number);
		exit(EXIT_FAILURE);
	}

	temp = *stack + (*stack)->next->n;
	temp = (*stack)->next;
	temp->n += (*stack)->n;

	_pop(stack, line_number);
	free(stack);
}
