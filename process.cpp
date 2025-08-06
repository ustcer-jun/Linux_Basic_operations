#include <iostream>
#include <iomanip>   // std::setw
#include <unistd.h>  // sleep
using namespace std;

void showProgressBar(int total, int current) {
    const int barWidth = 50; // 进度条长度
    float progress = (float)current / total;
    int pos = (int)(barWidth * progress);

    cout << "[";
    for (int i = 0; i < barWidth; ++i) {
        if (i < pos) cout << "=";
        else if (i == pos) cout << ">";
        else cout << " ";
    }
    cout << "] ";

    // 输出百分比，宽度3，右对齐
    cout << setw(3) << (int)(progress * 100) << "%  ";

    // 输出倒计时秒数
    cout << "(" << (total - current) << "s left)" << "\r" << flush;
}

int main() {
    int totalSeconds = 10;
    for (int i = 0; i <= totalSeconds; ++i) {
        showProgressBar(totalSeconds, i);
        sleep(1);
    }
    cout << endl; // 结束时换行

    return 0;
}