#include <iostream>
using namespace std;

int main() 
{
    int number;

    cout << "please enter a number between 0 and 10 : ";
    cin >> number;

    if (number < 0 || number > 10) {
        cout << "the entered number must between 0 and 10." <<endl;
        return 0;
    }

    if (number % 2 == 0) {
       cout << "the entered number is even." <<endl;
        if (number < 5) {
            cout << "the number is less than 5." <<endl;
        } else if (number > 5) {
           cout << "the number is greater than 5." <<endl;
        } else {
            cout << " the number is equal to 5." <<endl;
        }
    } else {
        cout << "the entered number odd." <<endl;
    }

    return 0;
}






