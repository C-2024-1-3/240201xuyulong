#include <iostream>
using namespace std;
class Point {
private:
	int x, y;
public:
	Point(int ix=60, int iy=80):x(ix), y(iy) {}
	void setPoint(int i, int j) {
		x = i + 60;
		y = i + 80;
	}
	void display() {
		cout << "The Point is:(" << x << "," << y <<")"<< endl;
	}
};
int main() {
	Point pt;
	pt.display();
	pt.setPoint(10, 20);
	pt.display();
	return 0;
}