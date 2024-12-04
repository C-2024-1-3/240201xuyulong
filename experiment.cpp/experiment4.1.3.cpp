#include <iostream>

int main() {
    bool lockers[100] = { false };  // 初始化数组，所有存物柜都关闭

    for (int i = 1; i <= 100; i++) {  // 模拟每个学生的操作
        for (int j = i - 1; j < 100; j = j + i) {  // 从第 i 个存物柜开始，每隔 i 个改变状态
            lockers[j] = !lockers[j];
        }
    }

    for (int i = 0; i < 100; i++) {  // 找出开着的存物柜
        if (lockers[i]) {
            std::cout << (i + 1) << " ";  // 输出开着的存物柜编号
        }
    }

    return 0;
}