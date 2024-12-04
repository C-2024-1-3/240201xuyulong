#include <iostream>
using namespace std;

void main() {
    int i, j, * pi, * pj; // 定义两个整数和两个指针

    pi = &i; // pi指向i的地址
    pj = &j; // pj指向j的地址

    i = 5; // 给i赋值5
    j = 7; // 给j赋值7

    cout << i << '\t' << j << '\t' << *pi << '\t' << *pj << endl; // 输出i和j的值，以及通过pi和pj访问的值
    cout << &i << '\t' << *&i << '\t' << &j << '\t' << *&j << endl; // 输出i和j的地址，以及通过&i和&j访问的值
}
