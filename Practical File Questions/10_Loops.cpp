/*Print multiplication table of 24, 50 and 29 using loop.*/

#include <iostream>

using namespace std;

int main() {
    // Multiplication table for 24
    cout << "Multiplication table of 24:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "24 * " << i << " = " << 24 * i << endl;
    }

    // Multiplication table for 50
    cout << "\nMultiplication table of 50:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "50 * " << i << " = " << 50 * i << endl;
    }

    // Multiplication table for 29
    cout << "\nMultiplication table of 29:" << endl;
    for (int i = 1; i <= 10; ++i) {
        cout << "29 * " << i << " = " << 29 * i << endl;
    }

    return 0;
}




