#include "monty.h"
/**
*
*
*
*/
void _pop(stack_t **stack, unsigned int line_number)
{
    stack_t *h = *stack;

    if (!h)
    {
        printf("error mesage");
        exit(EXIT_FAILURE);
    }
    h = (*stack)->next;
    free(*stack);
    *stack = h;
}
