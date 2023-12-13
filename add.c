#include "monty.h"

/**
* f_add - Adds the top two elements of the stack.
* @head: Double pointer to the beginning of the stack.
* @number: not in use
* Return: nothing to return
*/
void f_add(stack_t **head, unsigned int number)
{
	stack_t *temp;

	(void)number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n += (*head)->n;

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;

	free(temp);
}
