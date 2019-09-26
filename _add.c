#include "monty.h"
/**
* _add - adds the top two elements of the stack.
* @stack: Linked list
* @line_number: Int value
* Return: Void
*/
void _add(stack_t **stack, unsigned int line_number)
{
    stack_t *node1, *node2;

    if (!(*stack) || !(*stack)->next)
    {
        printf("L%d: can't add, stack too short", line_number);
        exit(EXIT_FAILURE);
    }
    node1 = (*stack);
    node2 = node1->next;
    node2->n += node1->n;
    _pop(stack, line_number);
}
