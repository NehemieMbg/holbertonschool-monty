#include "monty.h"

/**
 * _mul - Function that mul the two last node of a linked list data
 * @stack: Double pointer to the head of stack
 * @line_number: line number of file we process
 */
void _mul(stack_t **stack, unsigned int line_number)
{
	int res = 0;

	if (*stack && (*stack)->next)
	{
		res *= (*stack)->n;
		_pop(stack, line_number);
		(*stack)->n *= res;
	}
	else
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", line_number);
		error = 1;
		return;
	}
}
