#include "monty.h"

/**
*
*
*
*/
void _push(stack_t **stack, unsignet int line_number)
{
    stack_t *new;

    new = malloc(sizeof(stack_t));
    if (new == NULL)
        return;
    new->n = /*aun hay que definir como optener este valor---Josuah help!*/
    new->next = *stack;
    if (*stack)
        (*stack)->prev = new;
    *stack = new;
}
