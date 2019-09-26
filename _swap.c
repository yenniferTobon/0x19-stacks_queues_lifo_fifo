#include "monty.h"
/**
*
*
*/
void _swap(stack_t **stack, unsigned int line_number)
{
    stact_t *node1, node2;
    int n;

    if (!(*stack) || !(*stack)->next)
    {
        printf("error");
        exit(EXIT_FAILURE);
    }

    node1 = (*stack);
    node2 = node1->next;
    n = node1->n;
    node1->n = node2->n;
    node2->n =¨n;
}
