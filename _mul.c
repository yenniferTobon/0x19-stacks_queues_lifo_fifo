#include "monty.h"
/**
* _mul - multiplies the second top element of the stack with the top.
* @stack: Linked list
* @line_number: Int value
* Return: Void
*/
void _mul(stack_t **stack, unsigned int line_number)
{
    stack_t *node1, *node2;

    if (!(*stack) || !(*stack)->next)
    {
        printf("L%d: can't mul, stack too short", line_number);
        exit(EXIT_FAILURE);
    }
    node1 = (*stack);
    node2 = node1->next;
    node2->n = node2->n * node1->n;
    _pop(stack, line_number);
}
