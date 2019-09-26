#include "monty.h"
/**
* _pint - Prints the value at the top of the stack
* @stack: Linked list
* @line_number: Int value
* Return: Void
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
