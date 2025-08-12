#include <complex.h>
#include <stdatomic.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int globalvalue = 100;

int main(){
    pid_t id = fork();
    int cnt = 0;
    if(id < 0){
        printf("fork error!/n");
    }
    else if (id == 0) {
        while (1) {
            printf("Child process: pid = %d, ppid = %d, global value = %d, &globalvalue = %p\n",getpid(),getppid(),globalvalue,&globalvalue);
            sleep(1);
            cnt++;
            if(cnt == 10)
            {
                globalvalue = 300;
                printf("The Child process has change the globalvalue!\n");
            }
        }
    }
    else {
        while(1){
            
            printf("Father process: pid = %d,ppid = %d, global value = %d, &globalvalue = %p\n",getpid(),getppid(),globalvalue,&globalvalue);
        sleep(2);
        }
    }
}
