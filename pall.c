#include "monty.h"
/**
 * f_pall - prints the stack
 * @head: stack head
 * @counter: no used
 * Return: no return
*/
void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *new_node;
	(void)counter;

	new_node = *head;
	if (new_node == NULL)
		return;
	while (new_node)
	{
		printf("%d\n", new_node->n);
		new_node = new_node->next;
	}
}
