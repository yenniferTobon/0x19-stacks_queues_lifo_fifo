#include "monty.h"
/**
*
*
*/
void _pint(stack_t **stack, unsigned int line_number)
{
    stack_t *current = *stack;

    if (!current)
    {
        printf("error mesage");
        exit(EXIT_FAILURE);
    }
    printf("%d\n", current->n);
}
