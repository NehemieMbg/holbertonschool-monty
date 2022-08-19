#include "monty.h"

/**
 * _sub - subtracts top element of stack from the second element
 *  at the end the stack is one element shorter
 * @stack: double pointer on head of stack
 * @line_number: line number of script file
 */

void _sub(stack_t **stack, unsigned int line_number)
{
	int ret;

	if (*stack && (*stack)->next)
	{
		ret = (*stack)->n;
		_pop(stack, line_number);
		(*stack)->n -= ret;
	}
	else
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", line_number);
		error = 1;
		return;
	}
}
