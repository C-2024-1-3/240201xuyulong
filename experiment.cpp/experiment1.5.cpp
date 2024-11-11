#include <iostream>
using namespace std;

int main() {
    double fahrenheit;  // 定义双精度浮点数来存储输入的华氏温度
    cout << "请输入华氏温度：";
    cin >> fahrenheit;  // 输入华氏温度

    double celsius = (fahrenheit - 32) * 5.0 / 9.0;  // 进行温度转换的计算

    cout.precision(2);  // 设置输出精度为 2 位小数
    cout << "对应的摄氏温度为：" << std::fixed << celsius << std::endl;  // 输出结果

    return 0;
}