#include <sys/wait.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
	pid_t pid;
		pid = fork();
		if (pid == 0) {
              // child process
	    	  exit(0);
		}
       else {
                // parent process
                sleep(12);
}
       return 0;
}
