#include <iostream>
using namespace std;

// 函数用于判断一个数是否为素数
bool is_prime(int num) {
    if (num <= 1) {
        return false;  // 1 以下的数不是素数
    }
    for (int i = 2; i * i <= num; i++) {  // 从 2 到 num 的平方根遍历
        if (num % i == 0) {  // 如果能被整除，不是素数
            return false;
        }
    }
    return true;  // 否则是素数
}

int main() {
    int count = 0;  // 用于计数找到的素数个数
    int num = 2;  // 从 2 开始判断

    while (count < 200) {  // 当找到的素数个数小于 200 时
        if (is_prime(num)) {  // 如果是素数
            cout << num << " ";  // 输出该素数
            count++;  // 计数加 1
            if (count % 10 == 0) {  // 如果输出满 10 个素数
                cout << endl;  // 换行
            }
        }
        num++;  // 检查下一个数
    }

    return 0;
}


