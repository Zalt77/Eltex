#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>

int main(int argc, char const *argv[])
{
	printf("\nPROC 1: PID %d \t PPID \t%d\n", getpid(), getppid());
	pid_t pid1, pid2;
	 if ((pid1 = fork()) == 0) { 
   		 printf("\nPROC 2: PID %d \t PPID \t%d\n", getpid(), getppid());
	 
  		    	pid_t pid11;
   		 	 	if ((pid11 = fork()) == 0) { // Первый
   		 			printf("\nPROC 4: PID %d \t PPID \t%d\n", getpid(), getppid());
   				}	
  		}
   	 if (pid1 > 0 && (pid2 = fork()) == 0) { 
   		 printf("\nPROC 3: PID %d \t PPID \t%d\n", getpid(), getppid());
   		 		pid_t pid11, pid21;
   		 	 	if ((pid11 = fork()) == 0) { 
   		 			printf("\nPROC 5: PID %d \t PPID \t%d\n", getpid(), getppid());
  				}
 				if (pid11 > 0 && (pid21 = fork()) == 0) { 
   				printf("\nPROC 6: PID %d \t PPID \t%d\n", getpid(), getppid());
 				}
 		}
	return 0;
}
