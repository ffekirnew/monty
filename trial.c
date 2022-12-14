#include "monty.h"
#include <stdio.h>

stack_t *STACK;
int main(void)
{
    STACK = malloc(sizeof(stack_t));
    printf("%d", STACK->n);
    push(5);
    push(3);
    push(5);
    push(3);
    push(1);
    push(2);
    push(6);
    push(37);
    pall();
    return (0);
}