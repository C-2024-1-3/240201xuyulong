#include <iostream>
#include <vector>

using namespace std;

// 合并两个排序好的数组
void merge(const int list1[], int size1, const int list2[], int size2, int list3[]) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        if (list1[i] < list2[j]) {
            list3[k++] = list1[i++];
        }
        else {
            list3[k++] = list2[j++];
        }
    }
    while (i < size1) {
        list3[k++] = list1[i++];
    }
    while (j < size2) {
        list3[k++] = list2[j++];
    }
}

int main() {
    int size1, size2;
    cout << "Enter the number of elements in list1: ";
    cin >> size1;
    vector<int> list1(size1);
    cout << "Enter list1: ";
    for (int i = 0; i < size1; ++i) {
        cin >> list1[i];
    }

    cout << "Enter the number of elements in list2: ";
    cin >> size2;
    vector<int> list2(size2);
    cout << "Enter list2: ";
    for (int i = 0; i < size2; ++i) {
        cin >> list2[i];
    }

    // 合并后的数组大小为两个数组大小之和
    vector<int> list3(size1 + size2);
    merge(list1.data(), size1, list2.data(), size2, list3.data());

    cout << "The merged list is: ";
    for (int i = 0; i < size1 + size2; ++i) {
        cout << list3[i] << " ";
    }
    cout << endl;

    return 0;
}
