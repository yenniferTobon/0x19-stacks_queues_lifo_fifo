#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
*
*
*
*/

void _push(stack_t **top, unsigned int line_number)
{
	stack_t *neW;
	(void)line_number;

	neW = malloc(sizeof(stack_t));
	if (neW == NULL)
	{
	/**organizar este error**/
		return ;
	}
	neW->n = 0;
	neW->prev = NULL;

	if (*top == NULL)
	{
		neW->next = NULL;
		*top = neW;
	}
        else
	{
		neW->next = *top;
		(*top)->prev = neW;
		*top = neW;
	}
}

