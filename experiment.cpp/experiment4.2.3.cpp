#include <iostream>
using namespace std;

void f(char* st, int i) {
    st[i] = '\0'; // 在第i个字符位置放置字符串结束符
    cout << st;   // 打印字符串
    if (i > 1) f(st, i - 1); // 递归调用，减少i的值
}

int main() {
    char st[] = "abcd"; // 定义字符数组并初始化
    f(st, 4); // 调用函数f，传入字符串和长度
    return 0;
}