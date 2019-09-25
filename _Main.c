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
/**void _pall(stack_t **top, unsigned int line_number)
{
	stack_t *current = *top;
	(void)line_number;

	if (*top == NULL)
		return;

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
	}
}

void _push(stack_t **top, unsigned int line_number)
{
	stack_t *neW;
	(void)line_number;

	neW = malloc(sizeof(stack_t));
	if (neW == NULL)
	{
		##organizar este error
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
}**/


int fun_operators(char *operation, stack_t **top, int Nlinea)
{
	int i = 0;

	instruction_t f_ope[] = {
			{"push", _push},
			{"pall", _pall},
			{NULL, NULL},
	};

	while (f_ope[i].opcode != NULL)
	{
		if (strcmp(operation, f_ope[i].opcode) == 0)
		{
			f_ope[i].f(top, Nlinea);
			return (1);
		}
		i++;
	}
	/**Falta si no encuentra la operacion se debe mostrar un error **/
	return (0);
}

/**
 * _Main - function that
 * @argc: nothing
 * @argv: char name
 * Return: int 0 is success exit
 */

int main(int argc, char *argv[])
{
	FILE *filedesc;
	char *line_buf = NULL;
	size_t sizeBuffer = 1024;
	char *operation, *operation2;
	int Nlinea = 1;
	stack_t *top = NULL;

	(void)argv;
	if (argc > 2 || argc == 1)
	{
		printf("Organizar este error\n");
		/*return EXIT_FAILURE;*/
	}

	filedesc = fopen("00.m", "r");
	while (getline(&line_buf, &sizeBuffer, filedesc) != EOF)
	{
		operation = strtok(line_buf, " \r\n\t");
		fun_operators(operation, &top, Nlinea);
		operation2 = strtok(NULL, " \r\n\t");
		if ((strcmp(operation, "push") == 0) && operation2 != NULL)
		{
			top->n = atoi(operation2);
		}
		Nlinea += 1;
	}
	return (0);
}
