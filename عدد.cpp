#include <iostream>
using namespace std;
int main() 
{
    double a, b;
    cout << "please enter the first number: ";
    cin >> a;
    cout << " please enter the second number: ";
    cin >> b;

    if (a > b) {
        cout << "the first number is larger." <<endl;
    } else if (a < b) {
        cout << " the second number is larger." <<endl;
    } else {
        cout << "both numbers are equl." <<endl;
    }

    if (a > 0 && b > 0) {
       cout << "both numbers are positive." <<endl;
    } else if (a < 0 && b < 0) {
        cout << " both numbers are negative." <<endl;
    } else if (a == 0 && b == 0) {
        cout << " both numbers are zero." <<endl;
    }

    if (a > 0) {
        cout << "the first number is positive." <<endl;
    } else if (a < 0) {
        cout << " the first number is negative." <<endl;
    } else {
        cout << " the first number is zero." <<endl;
    }

    if (b > 0) {
        cout << " the second number is positive." << endl;
    } else if (b < 0) {
        cout << " the second number is negative." << endl;
    } else {
        cout << " the second number is zero." <<endl;
    }

    return 0;
}








