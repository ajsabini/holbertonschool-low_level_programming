#include "main.h"

/**
 * main - simpleshell
 * Return - 0 si salio todo bien o el valor del error
 */

int main()
{
	char *buffer = NULL;
	size_t size = 0;
	int space = 0, status = 0, exitstatus = 0, slash = 0, characters = 0;
	tokeniza *directorys = NULL, *pwd = NULL, *old_pwd = NULL, *input = NULL;

	dirs(&directorys, &pwd, &old_pwd);
	signal(SIGINT, _fsignal);	
	while(EOF)
	{
		if (isatty(STDIN_FILENO) == 1)
			dprintf(1,"OSHELL: ");
		do{
			characters = getline(&buffer, &size, stdin);
		} while(buffer[0] == '\n' && characters > 1);
		if (characters == -1)
		{
			dprintf(1,"\n");
			break;
		}
		buffer[characters - 1] = '\0';
		change_tabs(buffer);
		exitstatus = check_built(buffer);
		if (exitstatus == 1)
		{	free_all(buffer, old_pwd, pwd, directorys);
			exit(EXIT_SUCCESS);
		}
		space = check_space(buffer);
		slash = check_slash(buffer);
		if (space != 0)
		{
			tokenizer(buffer, &input, " ");
			if (slash == 1)
				status = check_directory(input);
			else
				status = check_files(directorys, input);
			free_nodes(input);
			input = NULL;
		}
	}
	free_all(buffer, old_pwd, pwd, directorys);
	return (status);
}
