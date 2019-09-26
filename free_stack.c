#include "monty.h"
/**
* free_stack - Free the list
* @stack: The start of the list
*/
void free_stack(stack_t *stack)
{
    dlistint_t *current, *next;
    current = stack;

    while (current != NULL)
    {
        next = current->next;
        free(current);
        current = next;
    }
}
