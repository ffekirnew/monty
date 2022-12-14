#include "monty.h"


void pall(void)
{
    stack_t *top = STACK;
    while (top != NULL)
    {
        printf("%d\n", top->n);
        top = top->next;
    }
}