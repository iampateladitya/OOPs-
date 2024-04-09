/*Create two classes DM and DB which store the value of distances. DM stores distances in meters and
centimeters and DB in feet and inches. Write a program that can read values for the class objects and odd
one object of DM with another object of DB.
 Use a friend function to carry out the addition operation. The object that stores the results may be a
DM object or DB object, depending on the units in which the result are required. The display should be in
the format of feet and inches or meters and centimeters depending on the object on display.*/


#include <iostream>

using namespace std;

class DB; 

class DM {
private:
    int meters;
    int centimeters;

public:
    DM(int m = 0, int cm = 0) : meters(m), centimeters(cm) {}

    friend void add(DM &d1, DB &d2);

    void display() {
        cout << "Distance: " << meters << " meters " << centimeters << " centimeters" << endl;
    }
};

class DB {
private:
    int feet;
    int inches;

public:
    DB(int f = 0, int i = 0) : feet(f), inches(i) {}

    friend void add(DM &d1, DB &d2);

    void display() {
        cout << "Distance: " << feet << " feet " << inches << " inches" << endl;
    }
};
void add(DM &d1, DB &d2) {
    int totalMeters = d1.meters + d2.feet * 0.3048; 
    int totalCentimeters = d1.centimeters + d2.inches * 2.54; 

    totalMeters += totalCentimeters / 100;
    totalCentimeters %= 100;

    cout << "Result in DM: " << totalMeters << " meters " << totalCentimeters << " centimeters" << endl;
}

int main() {
    DM d1(5, 80); 
    DB d2(16, 24); 
    cout << "Original distances:" << endl;
    cout << "DM: ";
    d1.display();
    cout << "DB: ";
    d2.display();
    add(d1, d2);

    return 0;
}

