#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>
#include <errno.h>
#include <sys/wait.h>
#include <stdlib.h>

int main()
{
	int i;
	pid_t pid;


	            
	char *arg[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (i = 0; i < 5; i++)
	{
		pid = fork();		
		
		if(pid != 0) /* proceso padre */
		{
			wait(NULL);
			printf("---------------------------\n\n");
		}
		else if (pid == 0) /* proceso hijo */
		{
			printf("[son] pid %d from [parent] pid %d %d\n", getpid(), getppid(), i);
			execve(arg[0], arg, NULL);
		}
	}
	return(0);
}
