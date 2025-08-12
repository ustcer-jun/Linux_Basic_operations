#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(){
    pid_t id = fork();
    if(id == 0){
        while(1){
            printf("Child Process and  PID = %d, PPID = %d, id = %d\n",getpid(),getppid(),id);
            sleep(1);
            exit(-1);
        }
    }
    else if (id > 0) {
        while(1){
            printf("Father Process and  PID = %d, PPID = %d, id = %d\n",getpid(),getppid(),id);
            sleep(5);
        }
    }

}
