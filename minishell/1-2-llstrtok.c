#include <stdio.h>
#include <string.h>

int main()
{
	char *buffer;
	size_t bufsize;
	ssize_t characters;
	int cent = 1, i;
	char *dev;
	char delimitador[] = " ";

	while (cent != 0)
	{
		printf("$ ");
		characters = getline(&buffer,&bufsize,stdin);
		cent = strcmp(buffer,"end-of-life\n");
		if (characters == -1)
		{
			printf("\n");
			break;
		}
		dev = strtok(buffer,delimitador);
		if (dev != NULL)
		{
			while (dev != NULL)
			{
				printf("%s\n",dev);
				dev = strtok(NULL, delimitador);
			}
		}
	}
	return(0);
}
