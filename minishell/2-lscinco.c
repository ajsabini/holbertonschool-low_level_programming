#include <stdio.h>                                                                                                    2 #include <string.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
	int cont, status;
    pid_t pid, hijoTerminado;
	char *argv[] = {"/bin/ls", "-l", "/tmp/"};

    printf("Before execve\n");

	for (cont = 1; cont < 6; cont++)
    {
		if (execve("/bin/ls", "-l", "/tmp/") == -1)
		{
			perror("Error:");
		}
		else
		{
			pid = fork();
			if (pid == 0)
			{
				sleep(2);
				exit(0);
			}
			else
			{
				if (pid > 0)
				{
					hijoTerminado = wait(&status);
				}
			}
		}
		
	}

    return (0);

}



