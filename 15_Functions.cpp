/*Define a function that returns the product of two numbers entered by user.*/

#include <iostream>

using namespace std;

int product(int num1, int num2) {
    return num1 * num2;
}

int main() {
    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;

    cout << "Enter the second number: ";
    cin >> num2;

    int result = product(num1, num2);

    cout << "The product of " << num1 << " and " << num2 << " is: " << result << endl;

    return 0;
}
