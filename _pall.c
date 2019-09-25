#include "monty.h"
/**
*
*
*
*/
void _pall(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    if (!current)
        return;
    while (current)
    {
        printf("%d\n", current->n);
        current = current->next;
    }
}
