// ConsoleApplication1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define  FLOORS 10
using namespace std;

class elevator {
private:
    int floorSelected;
    int floorNumber;
public:
    elevator();
    elevator(int selected, int number);
    ~elevator();
    void selectFloor(int floor);
    void go();
};

elevator::elevator() {
    floorSelected = 0;
    floorNumber = 0;
}

elevator::elevator(int selected, int number) {
    floorSelected = selected;
    floorNumber = number;
}

elevator::~elevator() {
    selectFloor(0);
    go();
}

void elevator::selectFloor(int floor) {
    if (floor < 0 || floor >= FLOORS)
        return;
    floorSelected = floor;
}

void elevator::go() {
    if (floorNumber < floorSelected)
        while (++floorNumber < floorSelected)
            cout << "floor: " << floorNumber << "; going up!" << endl;
    else if (floorNumber > floorSelected)
        while (--floorNumber > floorSelected)
            cout << "floor: " << floorNumber << "; going down!" << endl;
    cout << "floor: " << floorNumber << "; stopping." << endl;
}


int main()
{
    elevator A;
    elevator B(7, 2);
    A.selectFloor(7);
    A.go();
    return 0;
}
