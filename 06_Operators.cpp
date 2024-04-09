/*Write a program to input the value of the radius of a circle from keyboard and then calculate its perimeter and area.*/

#include <iostream>
using namespace std;
int main()
{
	int radius;
	cout << "Enter radius of circle" << endl;
	cin >> radius;
	cout << "Perimeter is " << 2*3.14*radius << endl;
	cout << "Area is  " << 3.14*radius*radius << endl;
	return 0;
}
