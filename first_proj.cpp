#include <iomanip>
#include <iostream>
#include <unistd.h>
using namespace std;
int main(){
    int count = 10;
    while(count -- ){
        cout<<setw(2)<<count<<"\r";
        std::fflush(stdout);
        sleep(1);
    }
    return 0;

}

