#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main() {
    pid_t id = fork();
    if (id == 0) { // 子进程
        printf("Child exiting, PID = %d\n", getpid());
        exit(0);
    } else {
        sleep(60); // 父进程存活，不wait
    }
    return 0;
}
