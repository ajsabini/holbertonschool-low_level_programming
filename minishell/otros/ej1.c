#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid;
	pid = fork();
	
	if (pid == 0)
		printf("yo soy el hijo\n");
	else
		if (pid > 0)
			printf("yo soy el padre\n");
		else
			printf("fork fallo\n");

	return (0);
}
