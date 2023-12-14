#include "monty.h"

/**
<<<<<<< HEAD
* f_sub - Subtracts the top element of the stack from the second top element.
=======
* f_sub - Subtracts the top two elements of the stack.
>>>>>>> 28e181b6293cff6317d01aa989dd87acb87feb98
* @head: Double pointer to the beginning of the stack.
* @number: not in use
* Return: nothing to return
*/
void f_sub(stack_t **head, unsigned int number)
{
	stack_t *temp;

	(void)number;

	if (*head == NULL || (*head)->next == NULL)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}

	(*head)->next->n -= (*head)->n;

	temp = *head;
	*head = (*head)->next;
	(*head)->prev = NULL;

	free(temp);
}
