#include "monty.h"

/**
 * f_swap - swaps the top two elements of the stack.
 * @head: double pointer.
 * @number: int value.
 */
void f_swap(stack_t **head, unsigned int number)
{
	int temp;

	(void)number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	
	temp = (*head)->n;
	(*head)->n = (*head)->next->n;
	(*head)->next->n = temp;
}
