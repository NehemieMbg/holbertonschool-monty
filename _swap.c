#include "monty.h"

/**
 *_swap - swaps the top two elements of stack
 *@stack: double pointer to head of stack
 *@line_number: line number of file we process on
 */

void _swap(stack_t **stack, unsigned int line_number)
{
	int swapper;

	if (!(*stack) && !(*stack)->next)
	{
		fprintf(stderr, "L%u: can't swap, stack too short", line_number);
		error = 1;
		return;
	}
	else
	{
		swapper = (*stack)->n;
		(*stack)->n = (*stack)->next->n;
		(*stack)->next->n = swapper;
	}
}
