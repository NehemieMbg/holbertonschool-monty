#include "monty.h"

/**
 * _check - check what function to pick according to input
 * @op: opcode file to run on
 * @stack: double pointer to head of stack
 * @line_number: line number of file we process
 */

void _check(char *op, stack_t **stack, unsigned int line_number)
{
	int i;
	instruction_t check_op[] = {
		{"push", _push},
		{"pall", _pall},
		{"NULL", NULL},
	};

	printf("%s\n", op);

	for (i = 0; check_op[i].opcode != NULL; i++)
	{
		if (strcmp(check_op[i].opcode, op) == 0)
		{
			printf("hello from check\n");
			check_op[i].f(stack, line_number);
		}
	}
}