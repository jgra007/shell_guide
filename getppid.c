#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
        pid_t ppid = getppid();

	printf("ppid: %d\n", ppid);
}
