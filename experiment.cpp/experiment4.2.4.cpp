#include <iostream>
using namespace std;

int* f() {
    int* list = new int[4] {1, 2, 3, 4}; // 使用new在堆上分配内存
    return list;
}

int main() {
    int* p = f();
    cout << p[0] << endl; // 输出1
    cout << p[1] << endl; // 输出2

    delete[] p; // 释放内存
    return 0;
}