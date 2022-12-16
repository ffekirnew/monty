#include "monty.h"

/**
 * op_push - pushes the given integer onto the stack
 * @stack: the stack to push a number on top of
 * @line_number: the line number of the operation
 *
 * Return: Nothing.
*/
void op_push(stack_t **stack, unsigned int line_number)
{
    stack_t *new;
    char *char_arg;
    int int_arg;
    stack_t *head = *stack;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
    {
        printf("Error: malloc failed\n");
		exit(EXIT_FAILURE);
    }

    char_arg = strtok(NULL, "\n ");
	if (char_arg!= NULL)
		int_arg = atoi(char_arg);
	else
	{
		printf("L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
    new->n = int_arg;
    new->next = head;
    head->next = new;
    head = new;
}
void op_pall(stack_t **stack, unsigned int line_number);
void op_pint(stack_t **stack, unsigned int line_number);
void op_pop(stack_t **stack, unsigned int line_number);
void op_swap(stack_t **stack, unsigned int line_number);