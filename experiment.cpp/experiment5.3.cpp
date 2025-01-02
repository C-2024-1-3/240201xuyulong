#include <iostream>
using namespace std;
class Cuboid{
private:
    double length, width, height;
public:
    void input(){
        cout << "Enter the length, width, height: ";
        cin >> length >> width >> height;
    }
    double calculatevolume(){
        return length * width * height;
    }
    void displayVolume(){
        cout << "volume: " << calculatevolume() << endl;
    }
};
int main(){
    Cuboid cuboid;
    for(int i=0;i<3;i++){
        cuboid.input();
        cuboid.displayVolume();
    }
    return 0;
}