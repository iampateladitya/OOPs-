/* Write a program to enter the values of two variables 'a' and 'b' from keyboard and then check if both the conditions 'a < 50' and 'a < b' are true.*/

#include <iostream>
	using namespace std;
int main()
{
  int b,a;
	cin >> a;
	cin >> b;
	cout << (a < 50 && a < b) << endl;
	return 0;
}
