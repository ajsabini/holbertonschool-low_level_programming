#include "main.h"

/**
 * dirs -as
 * @directorys: as
 * @pwd: as
 * @old_pwd: as
 * Return - sa
*/

void dirs(tokeniza **directorys, tokeniza **pwd, tokeniza **old_pwd)
{
	int  i = 0;
    char *path = NULL, *pwd_s = NULL, *old_pwd_s = NULL;
	char *token_path = NULL;

	old_pwd_s = get_oldpwd();
	token_path = strtok(old_pwd_s, "=");
	for (i = 0; token_path != NULL; i++)
	{
		if (i != 0)
			add_node(old_pwd, token_path);
		token_path = strtok(NULL, "=");
	}

	path = get_path();
	token_path = strtok(path, "=");
	for (i = 0; token_path != NULL; i++)
	{
		if (i == 1)
			tokenizer(token_path, directorys, ":");
		token_path = strtok(NULL,"=");
	}

	pwd_s = get_pwd();
	token_path = strtok(pwd_s, "=");
    for (i = 0; token_path != NULL; i++)
    {
   		if (i != 0)
   				add_node(pwd, token_path);
   		token_path = strtok(NULL, "=");
   	}
	free(old_pwd_s);
	free(path);
	free(pwd_s);
}

/**
 * free_all - as
 * @buffer - as
 * @old_pwd - as
 * @pwd - as
 * @directorys - as
 * Return - void
 */

void free_all(char *buffer, tokeniza *old_pwd, tokeniza *pwd, tokeniza *directorys)
{
	free(buffer);
	free_nodes(old_pwd);
	free_nodes(pwd);
	free_nodes(directorys);
}

/**
 * _env - as
 * @buffer: as
 * Return - as
 */

int _env(char *buffer)
{
	char *exit = "env";
	int i = 0, j = 0;

	for (i = 0; buffer[i]; i++)
	{
		if (buffer[i] == ' ')
			;
		else
		{
			if (buffer[i] == exit[j])
			{
				while (j < 4)
				{
					if (j == 3)
					{
						while (j < 4)
						{
							i++;
							if (buffer[i] == '\0')
								return (1);
							if (buffer[i] != ' ')
								return (0);
						}
					}

					if (buffer[i] == exit[j])
					{
						i++;
						j++;
					}
					else
						return (0);
				}
			}
			else
				return (0);
		}		
	}
	return (0);
}
