#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	Time() :hour(0), minute(0), sec(0) {}// 构造函数，默认构造函数
	void setTime(int h, int m, int s) // 设置时间的函数
{
		hour = h;
		minute = m;
		sec = s;
	}
	void printTime() const {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};// 打印时间的函数
	int main()
{
	Time t1; 
	int h, m, s;//定义t1为Time类对象
	cout << "Enter time(hour minut sec):";
	cin >> h >> m >> s;
	t1.setTime(h, m, s); // 设置时间
	t1.printTime(); // 打印时间
	return 0;
}
