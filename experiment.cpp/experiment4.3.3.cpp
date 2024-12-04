#include <iostream>
#include <algorithm> // 为了使用 sort 函数
using namespace std;

// 函数声明
void sortArray(int* arr, int size);

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size; // 用户输入数组大小

    // 使用 new 分配动态数组
    int* arr = new int[size];

    cout << "Enter " << size << " elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i]; // 用户输入数组元素
    }

    // 排序数组
    sortArray(arr, size);

    // 输出数组元素
    cout << "Sorted array elements:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 释放动态数组内存
    delete[] arr;

    return 0;
}

// 定义 sortArray 函数，使用标准库的 sort 函数对数组进行排序
void sortArray(int* arr, int size) {
    sort(arr, arr + size);
}
