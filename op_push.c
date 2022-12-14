#include "monty.h"


void push(int n)
{
    stack_t *new_node = malloc(sizeof(stack_t));

    new_node->n = n;
    new_node->next = STACK;
    STACK->prev = new_node;
    STACK = new_node;
}