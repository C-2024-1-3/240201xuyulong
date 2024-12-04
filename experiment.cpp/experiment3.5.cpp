#include <iostream>
using namespace std;
int main() {
    int day = 10;  // 表示第 10 天
    int remainingPeaches = 1;  // 第 10 天剩下 1 个桃子

    while (day > 1) {  // 从第 10 天往前推到第 2 天
        remainingPeaches = (remainingPeaches + 1) * 2;  // 计算前一天剩下的桃子数
        day--;
    }

    remainingPeaches = (remainingPeaches + 1) * 2;  // 计算第一天摘下的桃子数
     cout << "第一天共摘了 " << remainingPeaches << " 个桃子。" << endl;

    return 0;
}