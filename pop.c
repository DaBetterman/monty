#include "monty.h"

/**
* f_pop - removes the top element of the stack
* @head: stack head
* @number: not in use
* Return: no return
*/

void f_pop(stack_t **head, unsigned int number)
{
	stack_t *temp;

	(void) number;

	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", number);
		fclose(bus.file);
		free(bus.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	temp = *head;
	*head = temp->next;
	free(temp);
}
