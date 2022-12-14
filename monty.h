#ifndef _MONTY_HEADER_
#define _MONTY_HEADER_

#define EXIT_FAILURE 1
#define EXIT_SUCCESS 0

#include <stdio.h>
#include <stdlib.h>

#include <sys/types.h>               
#include <sys/stat.h>          
#include <fcntl.h>

#include <unistd.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


/* The Stack Data Structure */
extern stack_t *STACK;


/* The Operations */
void push(int n);
void pall(void);

#endif