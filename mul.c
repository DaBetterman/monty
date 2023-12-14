#include "monty.h"

/**
 * f_mul - Multiplies the second top element of the stack with the top element.
 * @head: Double pointer to the beginning of the stack.
 * @number: Not in use.
 * Return: Nothing to return.
 */
void f_mul(stack_t **head, unsigned int number)
{
	stack_t *temp;

	(void)number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n *= (*head)->n;

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;

	free(temp);
}

