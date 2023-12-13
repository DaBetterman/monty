#include "monty.h"

/**
 * pint - prints the value at the top of the stack.
 * @stack: double pointer.
 * @n: int value.
 */
void f_pint(stack_t **head, unsigned int number)
{
	stack_t *top;
	(void)number;

	if (head == NULL || *head == NULL)
	{
		return;
	}
	top = *head;
	printf("%d\n", top->n);
}
