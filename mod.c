#include "monty.h"

/**
 * f_mod - Computes the modulo of the division of the second top element
 *         of the stack by the top element.
 * @head: Double pointer to the beginning of the stack.
 * @number: Not in use.
 * Return: Nothing to return.
 */
void f_mod(stack_t **head, unsigned int number)
{
	stack_t *temp;

	(void)number;

	if (*head == NULL || (*head)->next == NULL || (*head)->n == 0)
	{
		fprintf(stderr, "L%u: can't mod, stack too short or division by zero\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n %= (*head)->n;

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;

	free(temp);
}

