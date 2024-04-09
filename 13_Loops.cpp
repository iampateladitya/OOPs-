/*Write a C++ program to calculate factorial of a number.*/

#include <iostream>
using namespace std;
int main()
{
	
	int j,number;
	cout << "Enter number" << "\n";
	cin >> number;
	int fact = 1;
	for (j=1;j<=number;j++){
 		fact = fact*j;
	}
	cout << fact << "\n";
	return 0;
}
