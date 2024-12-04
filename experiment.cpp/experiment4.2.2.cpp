#include <iostream>
using namespace std;

int main() {
    int a[] = { 1, 2, 3 }; // 定义一个整型数组
    int* p, i; // 定义一个整型指针p和整型变量i

    p = a; // 将数组a的首地址赋给指针p

    for (i = 0; i < 3; i++) {
        printf("%d,%d,%d,%d\n", a[i], p[i], *(p + i), *(a + i)); // 打印数组元素的不同访问方式
    }

    return 0; // 标准main函数返回值
}
