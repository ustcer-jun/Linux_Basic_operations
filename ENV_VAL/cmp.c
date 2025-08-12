#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
extern char** environ;
int main(){
    for(int i = 0; environ[i]!=NULL;i++){
        printf("ENV[%d]: %s\n", i,environ[i]);
    }

// int main(int argc,char* argv[],char* env[]){
//     //while (argc--) {
//         for(int i = 0;env[i];i++){
//             printf("env[%d] :%s\n",i,env[i]);
//         }
// 
      //  printf("argc[%d] --> %s\n",argc,*argv);
        //argv++;

//    if(argc != 2){
//         printf("Usage:\n\t%s[-a/-b/-ab/-ac/-bc/-abc]\n",argv[0]);
//         return 1;
//     }
//     if(strcmp("-a",argv[1]) == 0){
//         printf("Function: a\n");
//     }
//     if(strcmp("-b",argv[1]) == 0){
//         printf("Function: b\n");
//     }
//     if(strcmp("-ab",argv[1]) == 0){
//         printf("Function: ab\n");
//     }
//     if(strcmp("-ac",argv[1]) == 0){
//         printf("Function: ac\n");
//     }
//     if(strcmp("-bc",argv[1]) == 0){
//         printf("Function: bc\n");
//     }
//     if(strcmp("-abc",argv[1]) == 0){
//         printf("Function: abc\n");
//     }
// }
}
