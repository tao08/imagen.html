#include <unistd.h>
#include <stdio.h>
#include "shel.h"
#include <stdlib.h>

int main (int ac, char **argv, char **env)
{
	int return_status = EXIT_SUCCESS;
	char *line = NULL;
	size_t n = 0;
	char **tokens = NULL;
	(void) ac;
	(void) argv;
	(void) env;


	if (isatty(STDIN_FILENO))
		print_prompt();

 
	while (getline(&line, &n, stdin) != -1)
	{
		printf("%s\n", line);
		printf("%lu\n", n);

		if (line[0] == 'e')
		{
			free(line);
			exit(0);
		}
		token = parse _input(line);
		/*execute user input*/
		free(line);
		line = NULL;

		if (isatty(STDIN_FILENO))
			print_prompt();

	}
	free(line);
	return (return_status);
}
