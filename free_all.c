#include "monty.h"

/**
 * @brief
 *
 */

void free_all(stack_t *stack, FILE *fd)
{
	stack_t *tmp;

	while (stack != NULL)
	{
		tmp = stack;
		stack = stack->next;
		free(tmp);
	}
	fclose(fd);
}
