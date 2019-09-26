#include "monty.h"
/**
* _div - subtracts the top element of the stack from the second.
* @stack: Linked list
* @line_number: Int value
* Return: Void
*/
void _div(stack_t **stack, unsigned int line_number)
{
    stack_t *node1, *node2;

    if (!(*stack) || !(*stack)->next)
    {
        printf("L%d: can't div, stack too short", line_number);
        exit(EXIT_FAILURE);
    }
    node1 = (*stack);
    node2 = node1->next;
    if (node1->n == 0)
    {
        printf("L%d: division by zero", line_number);
        exit(EXIT_FAILURE);
    }
    node2->n = node2->n / node1->n;
    _pop(stack, line_number);
}
