#include <stdio.h>
#include<string.h>

int main()
{
    char *buffer;
    size_t bufsize;
    ssize_t characters;	
	int cent = 1;

	while (cent != 0)
	{
		printf("$ ");
		characters = getline(&buffer,&bufsize,stdin);
		cent = strcmp(buffer,"end-of-file\n");
		if (characters == -1)
		{
			printf("\n");
			break;
		}
		printf("%s", buffer);
	}

	return (0);  
}
