#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	pid_t pid;
	pid = fork();
	
	if (pid == 0)
		printf("yo soy el hijo %d, mi padre es %d\n", getpid(), getppid());
	else
		if (pid > 0)
			printf("yo soy el padre %d y mi hijo es %d y mi padre es %d\n", getpid(), pid, getppid());
		else
			printf("fork fallo\n");

	return (0);
}
