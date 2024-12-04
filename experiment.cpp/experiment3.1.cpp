#include <iostream>
using namespace std;

// 求最大公约数的函数
int gcd(int m, int n) {
    while (n != 0) {
        int temp = n;
        n = m % n;
        m = temp;
    }
    return m;
}

// 求最大公约数和最小公倍数的函数，使用引用参数
void gcdAndLcm(int m, int n, int& gcdValue, int& lcmValue) {
    gcdValue = gcd(m, n);
    lcmValue = m * n / gcdValue;
}

int main() {
    int m, n, gcdValue, lcmValue;
    cout << "请输入第一个自然数 m: ";
    cin >> m;
    cout << "请输入第二个自然数 n: ";
    cin >> n;

    gcdValue = gcd(m, n);
    cout << "m 和 n 的最大公约数是: " << gcdValue << endl;

    gcdAndLcm(m, n, gcdValue, lcmValue);
    cout << "m 和 n 的最小公倍数是: " << lcmValue << endl;

    return 0;
}


