#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>

int main(void)
{
	pid_t pid, hijoTerminado;
	int status;
	pid = fork();
	
	if (pid == 0) //hijo
	{
		printf("yo soy el hijo %d, mi padre es %d\n", getpid(), getppid());
		sleep(5); //vemos el efeto de espera, 5 segundos, para verlo en pantalle, el tiempo que el padre esta bloqueado esperando
		printf("Termino ya \n");
		exit(0);
	}
	else
		if (pid > 0) //padre
		{
			printf("yo soy el padre %d y mi hijo es %d y mi padre es %d\n", getpid(), pid, getppid());
			printf("Padre esperando la terminaion del hijo\n");
			hijoTerminado = wait(&status);
			printf("Termino mi hijo %d\n",hijoTerminado);
		}
		else
			printf("fork fallo\n");

	return (0);
}
