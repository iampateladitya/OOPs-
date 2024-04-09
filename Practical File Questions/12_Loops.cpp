/*Print the following patterns using loop :
a.
*
**
***
****
b.
   *  
 *** 
*****
 *** 
   *  
c.
1010101
 10101 
  101  
   1   */



#include <iostream>

using namespace std;

int main() {
    // Pattern a
    cout << "Pattern a:" << endl;
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }

    // Pattern b
    cout << "\nPattern b:" << endl;
    int rows = 3;
    int spaces = rows - 1;
    int stars = 1;
    for (int i = 1; i <= rows * 2; ++i) {
        for (int j = 1; j <= spaces; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= stars; ++j) {
            cout << "*";
        }
        cout << endl;
        if (i < rows) {
            spaces--;
            stars += 2;
        } else {
            spaces++;
            stars -= 2;
        }
    }

    // Pattern c
    cout << "\nPattern c:" << endl;
    int num = 1;
    for (int i = 1; i <= 4; ++i) {
        for (int j = 1; j <= i - 1; ++j) {
            cout << " ";
        }
        for (int j = 1; j <= 2 * (4 - i) + 1; ++j) {
            cout << num;
            num = 1 - num;
        }
        cout << endl;
    }

    return 0;
}
