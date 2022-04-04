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
		exit(7);
	}
	else
		if (pid > 0) //padre
		{
			printf("yo soy el padre %d y mi hijo es %d y mi padre es %d\n", getpid(), pid, getppid());
			printf("Padre esperando la terminaion del hijo\n");
			hijoTerminado = wait(&status);
			printf("Termino mi hijo %d\n",hijoTerminado);
			//printf("mi hijo termino y me envio un %d\n",WEXITSTATUS(status)); //el padre le agrego un pf pa mostrar lo que le envio el hijo, que deberia ser un cero y esta guardado en stastsu, lo muestra con una macro
			//otra forma de mostrar haciendo statsu / 256
			printf("mi hijo termino y me envio %d\n",(status/256));

		}
		else
			printf("fork fallo\n");

	exit(6); //termina el padre, le haemos un exit en vez de return
}
