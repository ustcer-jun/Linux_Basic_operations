#include "process.h"
#include <stdio.h>

void ProcessOn(){
    char labels[types] ="|\\-/"; 
    char str[101] = {'\0'};
    memset(str,'\0',sizeof(str));
    for(int i = 0;i<NUM;i++){
        str[i] = '#';
        printf("[%-101s][%-3d%%%c]\r",str,i,labels[i%4]);
        fflush(stdout);
        usleep(50000);

    }
    printf("\n");
}
