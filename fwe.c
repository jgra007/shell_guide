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

	for (i = 0; i < 6; i++)
	{
		pid = fork();

		if(pid != 0)
		{
			wait(NULL);
		}
		else
		{
		printf("[son] pid %d from [parent] pid %d %d\n",
		       getpid(), getppid(), i);
		exit(0);
		}
	}
	return(0);
}
