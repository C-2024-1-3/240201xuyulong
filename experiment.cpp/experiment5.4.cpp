#include <iostream>
using namespace std;
class Student {
private:
	int id;
	double score;
public:
	Student(int i, double s) :id(i), score(s) {}
	double getScore() {return score;}
	int getId() {return id;}
};
double max(Student students[], int size) {
	double highest=students[0].getScore();
	int id=students[0].getId();
	for(int i=1;i<size;i++) {
		if (students[i].getScore() > highest) {
			highest = students[i].getScore();
			id= students[i].getId();
		}
	}
	cout<<"The highest score is "<<highest<<" and the student's id is "<<id<<endl;
	return highest;
}
int main() {
	Student students[5] = {Student(1, 85), Student(2, 92), Student(3, 78),Student(4,89),Student(5,95)};
	max(students, 5);
	return 0;
}