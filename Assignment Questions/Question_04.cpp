/*Write a macro that obtains the largest of 3 numbers*/

#include <iostream>
using namespace std;

#define MAX(a, b) ((a > b) ? a : b)
#define MAX_OF_THREE(a, b, c) MAX(MAX(a, b), c)

int main() {
    int num1, num2, num3;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;

    int largest = MAX_OF_THREE(num1, num2, num3);

    cout << "The largest of the three numbers is: " << largest << endl;

    return 0;
}
