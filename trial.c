#include "monty.h"
#include <stdio.h>

stack_t *STACK;
int main(void)
{
    STACK = malloc(sizeof(stack_t));
    printf("%d", STACK->n);
    push(5);
    printf("%d", STACK->n);
    push(3);
    printf("%d", STACK->n);
    push(5);
    printf("%d", STACK->n);
    push(3);
    printf("%d", STACK->n);
    return (0);
}