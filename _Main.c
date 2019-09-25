#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
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
	char *arguments;
	int size = 0;

	if (argc > 2 || argc == 1)
	{
		printf("Organizar este error");
		return EXIT_FAILURE;
	}

	filedesc = fopen(argv[1], "r");
	while (getline(&line_buf, &sizeBuffer, filedesc) != EOF)
	{
		arguments = strtok(line_buf, " \r\n\t");
		while (arguments != NULL)
		{
			printf("%s\n", arguments);
			arguments = strtok(NULL, " \r\n\t");
		}
	}
	printf("%d\n", size);
	/**printf("%s\n", argv[1]);**/
	return (0);
}
