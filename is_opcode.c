#include "monty.h"

/**
*
*
*
*/
void is_opcode(
{
    int i = 0;
    instruction_t opcodes[] = {
        {"push", _push},
        {"pall", _pall},
        /* the rest of opcode */
        {NULL, NULL}
    };
    
    for (i = 0; opcode[i].opcode; i++)
    {
        if (!strcmp(opcode[i].opcode, /*token*/))
            /* Save argument */
        opcode[i].f(/* Ask more to Joshua ajajaja*/)
        break;
    }
    
    if (opcode[i].f == NULL)
    {
        printf("Error mesage");
        exit(EXIT_FAILURE);
    }
}
