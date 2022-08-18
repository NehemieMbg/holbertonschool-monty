#include "monty.h"
#include <stdio.h>

/**
 * main - main monty program to handle the bytecode files
 * @argc: argument count
 * @argv: array of argument
 * Return: EXIT_SUCCESS for success, EXIT_FAILURE for failure
 */

int main(int argc, char **argv)
{
	FILE *fd = NULL;
	stack_t *stack = NULL;
	unsigned int line_number = 0;
	char *str = NULL;
	char *tok = NULL;
	size_t n = 0;

	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}

	fd = fopen(argv[1], "r");
	if (fd == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&str, &n, fd) != -1)
	{
		line_number++;
		tok = strtok(str, "\n\t\r ");
		if (tok != NULL)
		{
			_check(tok, &stack, line_number);
		}
	}
	exit(EXIT_SUCCESS);
}
