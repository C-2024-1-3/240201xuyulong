#include <iostream>
#include <cstring>
using namespace std;

void count(const char s[], int counts[]) {
    for (int i = 0; s[i] != '\0'; ++i) {
        char c = tolower(s[i]); // 将字符转换为小写
        if (c >= 'a' && c <= 'z') {
            counts[c - 'a']++; // 更新对应字母的计数
        }
    }
}

int main() {
    const int SIZE = 26;
    int counts[SIZE] = { 0 }; // 初始化计数数组
    char str[100]; // 假设字符串长度不超过99

    cout << "Enter a string: ";
    cin.getline(str, 100); // 读取字符串

    count(str, counts); // 调用count函数

    // 打印非零的计数
    for (int i = 0; i < SIZE; ++i) {
        if (counts[i] > 0) {
            cout << char('a' + i) << ": " << counts[i] << endl;
        }
    }

    return 0;
}