#include "monty.h"

/**
 * f_pall - function that prints everything in the stack
 * @head: double head pointer to the stack~
 * @counter: unused line count
 *
 * Return: the stack
 */

void f_pall(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;

	h = *head;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
