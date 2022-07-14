/**
 * check_slash - chequea / para saber si es directorio
 * @s: lo que se ingreso
 * Return - si encontro / devuelve 1, sino 0
*/

int checkslash(char *s)
{
	int i = 0;
	
	for (i = 0; s[i]; i++)
	{
		if (s[i] == '/')
			return (1);
	}
	return (0);
}

/**
 * check_space - chequea si hay espacios
 * @s: reibe lo que se ingreso
 * Return - 1 si hay algun arater distinto a espacio, sino 0
 */
int check_space(char *s)
{
	int i = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] != ' ')
			return (1);
	}
	return (0);
}
