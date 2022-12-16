#include "monty.h"

/**
 * get_op_func - gets the right operation and returns the right operation
 * to do the code with
 * @opcode: the opcode string
 *
 * Return: function(stack_t **stack, unsigned int line_number)
*/
void (*get_op_func(char *opcode))(stack_t **stack, unsigned int line_number)
{
    instruction_t ops[] = {
        {"push", op_push},/*
        {"pall", op_pall},
        {"pint", op_pint},
        {"pop", op_pop},
        {"swap", op_swap},
        {"add", op_add},
        {"nop", op_nop},*/
        {NULL, NULL}
    };
    int i = 0;

    while (ops[i].f != NULL && strcmp(ops[i].opcode, opcode) != 0)
	{
		i++;
	}
    return (ops[i].f);
}