#include "monty.h"

/**
 * _pall - prints all value on stack from top to down
 * @stack: double pointer to head of stack
 * @line_number: line number we are executing from script file
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *mover;

	(void)line_number;

	mover = *stack;
	while (mover != NULL)
	{
		printf("%d\n", mover->n);
		mover = mover->next;
		if (mover == *stack)
			return;
	}
}
