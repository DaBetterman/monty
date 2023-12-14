#include "monty.h"

/**
 * f_pchar - Prints the ASCII character at the top of the stack.
 * @head: Double pointer to the beginning of the stack.
 * @number: Line number of the opcode in the Monty file.
 */
void f_pchar(stack_t **head, unsigned int number)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	if ((*head)->n < 0 || (*head)->n > 127)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	printf("%c\n", (*head)->n);
}

