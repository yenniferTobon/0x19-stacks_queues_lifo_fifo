#include "monty.h"
/**
* _swap - swaps the top two elements of the stack.
* @stack: Linked list
* @line_number: Int value
* Return: Void
*/
void _swap(stack_t **stack, unsigned int line_number)
{
    stact_t *node1, node2;
    int n;

    if (!(*stack) || !(*stack)->next)
    {
        printf("L%d: can't swap, stack too short", line_number);
        exit(EXIT_FAILURE);
    }

    node1 = (*stack);
    node2 = node1->next;
    n = node1->n;
    node1->n = node2->n;
    node2->n =¨n;
}
