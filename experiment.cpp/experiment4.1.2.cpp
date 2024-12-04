#include <iostream>
using namespace std;

// 交换两个元素的函数
void swap(double& a, double& b) {
    double temp = a;
    a = b;
    b = temp;
}

// 冒泡排序函数
void bubbleSort(double list[], int listSize) {
    bool changed = true;
    do {
        changed = false;
        for (int j = 0; j < listSize - 1; j++) {
            if (list[j] > list[j + 1]) {
                swap(list[j], list[j + 1]);
                changed = true;
            }
        }
    } while (changed);
}

// 测试程序
int main() {
    double arr[10];
    cout << "请输入 10 个双精度数字：" << endl;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr, 10);
    cout << "排序后的数字为：" << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
