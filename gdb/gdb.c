#include <stdio.h>
#include <string.h>
#include <time.h>

void Print(int sum){
    time_t timestamp = time(NULL);
    printf("result = %d , timestamp: %ld\n", sum, timestamp);
}

int AddtoSum(int num){
    int sum = 0;
    for (int i =0; i<num; i++) {
        sum += i;
    }
    return sum;
}


int main(){
    int num = 100;
    int sum = AddtoSum(num);
    Print(sum);
    return 0;
}
