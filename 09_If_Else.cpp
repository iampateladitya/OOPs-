/*Take values of length and breadth of a rectangle from user and check if it is square or not.*/

#include <iostream>
using namespace std;
int main()
{
    

    int length,breadth;
    cout<<"Enter length"<<endl;
    cin>>length;
    cout<<"Enter breadth"<<endl;
    cin>>breadth;

    if(length==breadth)
    {
        cout<<"It is a square"<<endl;
    }
    else
    {
        cout<<"It is a rectangle"<<endl;
    }

    return 0;
}
