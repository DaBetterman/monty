#include "monty.h"

/**
 * f_div - Divides the second top element of the stack by the top element.
 * @head: Double pointer to the beginning of the stack.
 * @number: not in use
 */
void f_div(stack_t **head, unsigned int number)
{
	stack_t *temp;

	(void)number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	if ((*head)->n == 0)
	{
		fprintf(stderr, "L%u: division by zero\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	(*head)->next->n /= (*head)->n;

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;

	free(temp);
}
