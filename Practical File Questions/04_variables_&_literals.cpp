/*Write a C++ program to print an int, a double and a char on screen.*/

#include <iostream>
using namespace std;
int main()
{
	int a;
	double b;
	char c;
	cout << "Enter value of a int, double and a char :- " << endl;
	cin >> a;
	cin >> b;
	cin >> c;

	cout << "int is " << a << " double is " << b << " char is " << c << endl;
	return 0;
}
