/*Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.*/

#include<iostream>
using namespace std;

void circle(int radius)
{
    cout << "Perimeter is "<<2*3.14*radius<<"\n";
    cout << "Area is "<<3.14*radius*radius<<"\n";
}

int main()
{
    circle(4);
    return 0;
}
