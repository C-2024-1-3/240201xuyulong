#include <iostream>
#include <string>
using namespace std;

// 函数原型声明
int indexof(const string& s1, const string& s2);

int main() {
    string s1, s2;
    cout << "Enter string s1: ";
    getline(cin, s1); // 使用getline读取包含空格的字符串
    cout << "Enter string s2: ";
    getline(cin, s2); // 使用getline读取包含空格的字符串

    // 调用函数并输出结果
    int result = indexof(s1, s2);
    if (result != -1) {
        cout << "s1 is a substring of s2, first occurrence at index: " << result << endl;
    }
    else {
        cout << "s1 is NOT a substring of s2." << endl;
    }

    return 0;
}

// 定义indexof函数，检查s1是否为s2的子串
int indexof(const string& s1, const string& s2) {
    size_t pos = s2.find(s1); // 使用string的find方法查找子串
    if (pos != string::npos) {
        return pos; // find方法返回子串的起始位置，如果找到的话
    }
    return -1; // 如果没有找到，find方法返回string::npos，我们返回-1
}