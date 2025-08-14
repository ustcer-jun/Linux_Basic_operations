#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/_types/_pid_t.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    pid_t id = fork();
    if(id == 0){
        int cnt = 10;
        while (cnt > 0) {
            printf("Child process, ID = %d, PID = %d, PPID = %d\n",id,getpid(),getppid());
            cnt --;
            sleep(1);
        }
    } 
    // sleep(15);
    // pid_t ret = wait(NULL);
    int status = 0;
    pid_t ret = waitpid(id,&status,0);
    if(id > 0){ 
        // printf("wait success: %d\n",ret);
        printf("wait success: %d, sig number: %d, child exit code: %d\n", ret,(status & 0x7F),(status>>8)&0xFF);
    }
    sleep(5);

}

//int sum(int num){ int ret = 0;
    //for(int i = 0;i<num;i++){
        //ret+=i;
    //}
    //exit(1);
    //printf("Sum(100) = %d\n",ret);
//}
//
//
//int main(){
    //printf("Hello World!\n");
    //sleep(6); 
   //_exit(32);
//


    //for(int i = 0;i<200;i++){
       // printf("%d:%s\n",i,strerror(i));
   // }


