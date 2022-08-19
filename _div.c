#include "monty.h"

/**
 * _div - divide the second top element by the top element of stack
 * @stack: double pointer to head of stack
 * @line_number: line number of script
 */

void _div(stack_t **stack, unsigned int line_number)
{
	int divis;

	if (*stack && (*stack)->next)
	{
		divis = (*stack)->n;
		_pop(stack, line_number);
		if (divis == 0)
		{
			fprintf(stderr, "L%u: division by zero\n", line_number);
			error = 1;
			return;
		}
		(*stack)->n /= divis;
	}
	else
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", line_number);
		error = 1;
		return;
	}
}
