#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"
/**
 * _Main - function that
 * @argc: nothing
 * @argv: char name
 * Return: int 0 is success exit
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
	if (*top == NULL)
	{
		*top = neW;
	}
	else
	{
		neW->next = *top;
		*top = neW;
	}
	neW->next = NULL;
	neW->prev = NULL;
	neW->n = 0;
}
int fun_operators(char *operation, stack_t **top, int Nlinea)
{
	int i = 0;

	instruction_t f_ope[] = {
			{"push", _push},
			{"pall", _push},
			{NULL, NULL},
	};

	while (f_ope[i].opcode != NULL)
	{
		if (strcmp(operation, f_ope[i].opcode) == 0)
		{
			f_ope[i].f(top, Nlinea);
			return (1);
			printf("lo encontre");
		}
		i++;
	}
	/**Falta si no encuentra la operacion se debe mostrar un error **/
	return (0);
}

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
		printf("Organizar este error");
		/*return EXIT_FAILURE;*/
	}

	filedesc = fopen("00.m", "r");
	while (getline(&line_buf, &sizeBuffer, filedesc) != EOF)
	{
		operation = strtok(line_buf, " \r\n\t");
		printf("%s\n", operation);
		fun_operators(operation, &top, Nlinea);
		operation2 = strtok(NULL, " \r\n\t");
		printf("%s", operation2);
		if ((strcmp(operation, "push") == 0) && operation2 != NULL)
		{
			top->n = atoi(operation2);
		}
		Nlinea += 1;
	}
	return (0);
}
